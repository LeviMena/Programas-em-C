#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar números aleatórios
int rand_num(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int N;

    printf("Digite o tamanho da matriz N x N: ");
    scanf("%d", &N);

    int** matriz = (int**) malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int*) malloc(N * sizeof(int));
    }

    srand(time(NULL));

    // Preenchendo a matriz com números aleatórios
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand_num(1, 100);
        }
    }

    // Calculando o somatório da diagonal principal
    int somatorio = 0;
    for (int i = 0; i < N; i++) {
        somatorio += matriz[i][i];
    }

    // Verificando se o somatório é par ou ímpar
    if (somatorio % 2 == 0) {
        printf("O somatório da diagonal principal é par.\n");
    } else {
        printf("O somatório da diagonal principal é ímpar.\n");
    }

    // Desalocando a matriz
    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}