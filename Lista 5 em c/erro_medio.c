#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Função para gerar números aleatórios
int rand_num(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Função para calcular o erro médio quadrático
double mse(int a[], int b[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(a[i] - b[i], 2);
    }
    return sum / size;
}

int main() {
    int size = 10;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Vetores A e B com valores aleatórios
    int a[size], b[size];
    for (int i = 0; i < size; i++) {
        a[i] = rand_num(0, 9);
        b[i] = rand_num(0, 9);

        // Adicionar um pequeno valor aleatório ao elemento correspondente do segundo vetor
        b[i] += rand_num(-1, 1);
    }

    // Calcular e exibir o erro médio quadrático
    double error = mse(a, b, size);
    printf("Erro médio quadrático: %.2f\n", error);

    return 0;
}