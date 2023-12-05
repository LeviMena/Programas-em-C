#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

typedef struct {
    char name[SIZE];
    char email[SIZE];
    char password[SIZE];
} User;

void create_csv(FILE *file) {
    fprintf(file, "name,email,password\n");
}

void add_user(FILE *file, User user) {
    fprintf(file, "%s,%s,%s\n", user.name, user.email, user.password);
}

void register_user() {
    User new_user;
    printf("Enter your name: ");
    scanf("%s", new_user.name);
    printf("Enter your email: ");
    scanf("%s", new_user.email);
    printf("Enter your password: ");
    scanf("%s", new_user.password);

    FILE *file = fopen("users.csv", "a");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }
    add_user(file, new_user);
    fclose(file);
    printf("User registered successfully.\n");
}

int main() {
    register_user();
    return 0;
}