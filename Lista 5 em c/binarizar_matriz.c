#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Função para gerar números aleatórios
int rand_num(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Função para inicializar uma matriz com números aleatórios
void init_matrix(int matrix[][20], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand_num(0, 9);
        }
    }
}

// Função para imprimir uma matriz
void print_matrix(int matrix[][20], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Função para binarizar os elementos da matriz M e criar a matriz S
void create_S(int matrixM[][20], int matrixS[][20], int rows, int cols, int t) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixS[i][j] = matrixM[i][j] > t ? 1 : 0;
        }
    }
}

int main() {
    srand(time(NULL));

    int matrixM[20][20];
    int matrixS[20][20];

    int rows, cols, t;

    printf("Digite o número de linhas (<= 20): ");
    scanf("%d", &rows);

    printf("Digite o número de colunas (<= 20): ");
    scanf("%d", &cols);

    printf("Digite o limiar t: ");
    scanf("%d", &t);

    init_matrix(matrixM, rows, cols);
    create_S(matrixM, matrixS, rows, cols, t);

    printf("\nMatriz M:\n");
    print_matrix(matrixM, rows, cols);

    printf("\nMatriz S:\n");
    print_matrix(matrixS, rows, cols);

    return 0;
}