#include <stdio.h>

void read_array(int *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int find_min(int *array, int n) {
    int min = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int array[n];
    read_array(array, n);

    int min = find_min(array, n);
    printf("O menor elemento é %d e está no endereço %p.\n", min, &min);

    return 0;
}