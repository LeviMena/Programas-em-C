#include <stdio.h>

int main() {

    int x, n, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("Digite até quanto obter sua tabuada: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("%d * %d = %d\n", x, i, x*i);
    }
    return 0;
}