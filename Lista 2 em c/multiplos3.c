#include <stdio.h>

int main() {

    int a, b, i, q = 0;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            if (i % 3 == 0) {
                q++;
            }
        }

    } else {
         for (i = b; i <= a; i++) {
            if (i % 3 == 0) {
                q++;
            }
        }
    }
    printf("O número de múltiplos de 3 neste intervalo é: %d", q);

    return 0;
}