#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int** matriz;
    int quantidade;
    double media;
} Matriz;

Matriz criar_matriz(int quantidade) {
    Matriz m;
    m.matriz = (int**) malloc(quantidade * sizeof(int*));
    m.quantidade = quantidade;
    m.media = 0;

    for (int i = 0; i < quantidade; i++) {
        m.matriz[i] = (int*) malloc(quantidade * sizeof(int));
    }

    return m;
}

void gerar_numeros_aleatorios(Matriz* m) {
    srand(time(NULL));

    for (int i = 0; i < m->quantidade; i++) {
        for (int j = 0; j < m->quantidade; j++) {
            m->matriz[i][j] = rand() % 100;
        }
    }
}

void calcular_media(Matriz* m) {
    double soma = 0;

    for (int i = 0; i < m->quantidade; i++) {
        for (int j = 0; j < m->quantidade; j++) {
            soma += m->matriz[i][j];
        }
    }

    m->media = soma / (m->quantidade * m->quantidade);
}

void imprimir_matriz(Matriz* m) {
    for (int i = 0; i < m->quantidade; i++) {
        for (int j = 0; j < m->quantidade; j++) {
            printf("%d ", m->matriz[i][j]);
        }
        printf("\n");
    }
}

void liberar_matriz(Matriz* m) {
    for (int i = 0; i < m->quantidade; i++) {
        free(m->matriz[i]);
    }
    free(m->matriz);
}

int main() {
    int quantidade;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &quantidade);

    Matriz m = criar_matriz(quantidade);

    gerar_numeros_aleatorios(&m);

    calcular_media(&m);

    printf("\nMatriz gerada:\n");
    imprimir_matriz(&m);

    printf("\nMédia: %.2f\n", m.media);

    liberar_matriz(&m);

    return 0;
}