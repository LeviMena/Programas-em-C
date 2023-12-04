#include <stdio.h>

void normalize(int arr[], int size) {
    // Encontrar o valor mínimo e máximo no vetor
    int min_val = arr[0];
    int max_val = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // Normalização dos dados
    for (int i = 0; i < size; i++) {
        arr[i] = (arr[i] - min_val) / (float)(max_val - min_val);
    }
}

int main() {
    // Exemplo de vetor
    int vetor[] = {3, 8, 2, 10, 5};

    // Tamanho do vetor
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    // Normaliza o vetor
    normalize(vetor, tamanho);

    // Imprime o vetor normalizado
    printf("Vetor normalizado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%f ", (float)vetor[i]);
    }

    return 0;
}
