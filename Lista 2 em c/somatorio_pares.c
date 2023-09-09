#include <stdio.h>

int main() {

    int a, b, i, soma =0;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            if (i % 2 == 0) {
                soma = soma + i;
            }
        }

    } else {
         for (i = b; i < a; i++) {
            if (i % 2 == 0) {
                soma = soma + i;
            }
        }
    }
    printf("O somatório dos pares neste intervalo será: %d", soma);

    return 0;
}