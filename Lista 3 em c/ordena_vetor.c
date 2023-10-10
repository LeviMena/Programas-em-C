#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Código utilizando método de seleção
void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        if (indiceMinimo != i) {
            int temp = vetor[i];
            vetor[i] = vetor[indiceMinimo];
            vetor[indiceMinimo] = temp;
        }
    }
}

int main() {
    int vetor[100];
    int tamanho = 100;
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

    // Ordena o vetor usando o método de seleção
    selectionSort(vetor, tamanho);

    // Apresenta o vetor ordenado
    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Método utilizando o bubble sort
void bubbleSort(int vetor[], int tamanho) {
    int troca;
    do {
        troca = 0;
        for (int i = 0; i < tamanho - 1; i++) {
            if (vetor[i] > vetor[i + 1]) {
                int temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                troca = 1;
            }
        }
    } while (troca);
}

int main() {
    int vetor[100];
    int tamanho = 100;
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
*/