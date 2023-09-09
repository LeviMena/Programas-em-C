#include <stdio.h>

int main() {

    int a, b, soma, n=0;

    printf("Digite o menor valor da média: ");
    scanf("%d", &a);

    printf("Digite o maior valor da média: ");
    scanf("%d", &b);

    for(soma = 0; b >= a; b = b - 1) {
        soma = soma + b;
        n++;
    }
    printf("O valor da média de todos os valores será %.2f", (float)soma/n);

    return 0;
}