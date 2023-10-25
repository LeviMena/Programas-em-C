#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Método utilizando o bubble sort
void bubbleSort(int vetor[], int tamanho) {
    int troca;
    do {
        troca = 0;
        int *ptr = vetor;
        for (int i = 0; i < tamanho - 1; i++) {
            if (*ptr > *(ptr + 1)) {
                int temp = *ptr;
                *ptr = *(ptr + 1);
                *(ptr + 1) = temp;
                troca = 1;
            }
            ptr++;
        }
    } while (troca);
}

int main() {
    int vetor[100]; //troque o tamanho do vetor aqui
    int tamanho = 100; //troque o tamanho do vetor aqui
    int minimo, maximo;

    // Solicita ao usuário o intervalo desejado
    printf("Digite o valor mínimo do intervalo: ");
    scanf("%d", &minimo);
    printf("Digite o valor máximo do intervalo: ");
    scanf("%d", &maximo);

    // Inicializa o gerador de números aleatórios com uma semente (seed) baseada no tempo
    srand(time(NULL));

    // Preenche o vetor com números pseudoaleatórios no intervalo [minimo, maximo]
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % (maximo - minimo + 1) + minimo;
    }

    // Ordena o vetor usando o método de bolha
    bubbleSort(vetor, tamanho);

    // Apresenta o vetor ordenado
    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
