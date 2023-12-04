#include <stdio.h>

void address_sort(int* array, int n, int* sorted_array) {
    sorted_array[0] = array[0];
    sorted_array[1] = array[1];
    sorted_array[2] = array[0];
    sorted_array[3] = array[1];

    for (int i = 0; i < n; i++) {
        if (array[i] < sorted_array[0]) {
            sorted_array[0] = array[i];
            sorted_array[2] = i;
        } else if (array[i] > sorted_array[1]) {
            sorted_array[1] = array[i];
            sorted_array[3] = i;
        }
    }
}

void read_array(int* array, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
}

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int array[n];
    read_array(array, n);

    int sorted_array[4];
    address_sort(array, n, sorted_array);

    printf("O menor elemento e: %d\n", sorted_array[0]);
    printf("O maior elemento e: %d\n", sorted_array[1]);
    printf("O endereco do menor elemento e: %p\n", &array[sorted_array[2]]);
    printf("O endereco do maior elemento e: %p\n", &array[sorted_array[3]]);

    return 0;
}