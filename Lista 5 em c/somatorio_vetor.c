#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int vetor[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += vetor[i];
    }
    return sum;
}

int main(int argc, char *argv[]) {
    (void) argc;
    int n = atoi(argv[1]);
    int *vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    srand((unsigned) time(NULL));

    for (int i = 0; i < n; i++) {
        vetor[i] = rand();
    }

    printf("Elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int sum = soma(vetor, n);
    printf("A soma dos elementos do vetor é: %d\n", sum);

    free(vetor);
    return 0;
}