#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50
#define MAX_RECORDS 100

typedef struct {
    int id;
    char name[SIZE];
    int quantity;
    float cost;
} Hardware;

void initialize_file(FILE *file) {
    for (int i = 0; i < MAX_RECORDS; i++) {
        Hardware empty;
        empty.id = -1;
        fwrite(&empty, sizeof(Hardware), 1, file);
    }
}

void add_hardware(FILE *file, Hardware hardware) {
    fseek(file, (hardware.id - 1) * sizeof(Hardware), SEEK_SET);
    fwrite(&hardware, sizeof(Hardware), 1, file);
}

void list_hardware(FILE *file) {
    rewind(file);
    Hardware hardware;
    while (fread(&hardware, sizeof(Hardware), 1, file)) {
        if (hardware.id != -1) {
            printf("%d - %s - %d - %.2f\n", hardware.id, hardware.name, hardware.quantity, hardware.cost);
        }
    }
}

void delete_hardware(FILE *file, int id) {
    Hardware empty;
    empty.id = -1;
    fseek(file, (id - 1) * sizeof(Hardware), SEEK_SET);
    fwrite(&empty, sizeof(Hardware), 1, file);
}

void update_hardware(FILE *file, Hardware new_data) {
    fseek(file, (new_data.id - 1) * sizeof(Hardware), SEEK_SET);
    fwrite(&new_data, sizeof(Hardware), 1, file);
}

int main() {
    FILE *file = fopen("hardware.dat", "r+b");
    if (file == NULL) {
        file = fopen("hardware.dat", "w+b");
        initialize_file(file);
    }

    int choice;
    do {
        printf("Menu:\n");
        printf("1. Add hardware\n");
        printf("2. List hardware\n");
        printf("3. Delete hardware\n");
        printf("4. Update hardware\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                Hardware new_hardware;
                printf("Enter the ID: ");
                scanf("%d", &new_hardware.id);
                printf("Enter the name: ");
                scanf("%s", new_hardware.name);
                printf("Enter the quantity: ");
                scanf("%d", &new_hardware.quantity);
                printf("Enter the cost: ");
                scanf("%f", &new_hardware.cost);
                add_hardware(file, new_hardware);
                break;
            }
            case 2: {
                list_hardware(file);
                break;
            }
            case 3: {
                int id;
                printf("Enter the ID of the hardware to delete: ");
                scanf("%d", &id);
                delete_hardware(file, id);
                break;
            }
            case 4: {
                Hardware new_data;
                printf("Enter the ID of the hardware to update: ");
                scanf("%d", &new_data.id);
                printf("Enter the name: ");
                scanf("%s", new_data.name);
                printf("Enter the quantity: ");
                scanf("%d", &new_data.quantity);
                printf("Enter the cost: ");
                scanf("%f", &new_data.cost);
                update_hardware(file, new_data);
                break;
            }
        }
    } while (choice != 5);

    fclose(file);
    return 0;
}