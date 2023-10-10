#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    // Inicializa o gerador de números aleatórios com uma semente (seed) baseada no tempo
    srand(time(NULL));

    // Declaração do vetor com 3 números inteiros
    int vetor[3];

    // Preenche o vetor com números pseudoaleatórios no intervalo [0, 19]
    for (int i = 0; i < 3; i++) {
        vetor[i] = rand() % 20; // Gera números entre 0 e 19
    }

    // Calcula a média aritmética dos números no vetor
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += vetor[i];
    }
    float mediaAritmetica = (float)soma / 3;

    // Calcula a média geométrica dos números no vetor
    float produto = 1.0;
    for (int i = 0; i < 3; i++) {
        produto *= vetor[i];
    }
    float mediaGeometrica = pow(produto, 1.0 / 3);

    // Apresenta os resultados
    printf("Valores no vetor: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);
    printf("Média Aritmética: %.2f\n", mediaAritmetica);
    printf("Média Geométrica: %.2f\n", mediaGeometrica);

    return 0;
}