#include <stdio.h>

int main() {
    float vetor[15];
    float menor, maior;
    float soma;

    // Leitura dos elementos do vetor
    printf("Digite os 15 elementos do vetor:\n");
    for (int i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);

        if (i == 0) {
            menor = vetor[i];
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    soma = menor + maior;

    printf("Menor elemento: %.2f\n", menor);
    printf("Maior elemento: %.2f\n", maior);
    printf("Soma do menor e do maior elemento: %.2f\n", soma);

    return 0;
}
