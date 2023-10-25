#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_MATRIZ 5 // Defina o tamanho da matriz aqui

int main() {
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int x;
    int contador = 0;

    // Inicializa o gerador de números aleatórios com uma semente (seed) baseada no tempo
    srand(time(NULL));

    // Preenche a matriz com números aleatórios no intervalo [0, 9]
    printf("Matriz gerada:\n");
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            matriz[i][j] = rand() % 10; // Gera números entre 0 e 9
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Solicita ao usuário um valor inteiro x
    printf("Digite um valor inteiro para procurar na matriz: ");
    scanf("%d", &x);

    // Verifica quantas vezes x aparece na matriz
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    // Apresenta o resultado
    printf("O valor %d aparece %d vez(es) na matriz.\n", x, contador);

    return 0;
}
