#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Funções auxiliares
int* criar_vetor(int n);
int comparar(const void *a, const void *b);

// Funções para calcular a m ́edia, a mediana e a moda
double calcular_media(int *vetor, int n);
double calcular_mediana(int *vetor, int n);
int calcular_moda(int *vetor, int n);

int main(int argc, char *argv[]) {
    (void) argc;
    int n = atoi(argv[1]);

    // Criar vetor de inteiros aleatórios
    int *vetor = criar_vetor(n);

    // Calcular a m ́edia, a mediana e a moda
    double media = calcular_media(vetor, n);
    double mediana = calcular_mediana(vetor, n);
    int moda = calcular_moda(vetor, n);

    // Imprimir os resultados
    printf("Média: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    // Liberar a memória alocada
    free(vetor);

    return 0;
}

int* criar_vetor(int n) {
    int *vetor = (int *) malloc(n * sizeof(int));

    // Gerar números aleatórios no intervalo [1, 100]
    srand((unsigned) time(NULL));
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100 + 1;
    }

    return vetor;
}

int comparar(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

double calcular_media(int *vetor, int n) {
    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }
    return soma / n;
}

double calcular_mediana(int *vetor, int n) {
    qsort(vetor, n, sizeof(int), comparar);

    if (n % 2 == 0) {
        return (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;
    } else {
        return vetor[n / 2];
    }
}

int calcular_moda(int *vetor, int n) {
    int max_count = 0;
    int mode = 0;
    int *count = (int *) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        count[vetor[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            mode = i;
        }
    }

    free(count);
    return mode;
}