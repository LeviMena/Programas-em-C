#include <stdio.h>

int main() {

    int x, M, m, c, d, u;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &x);

    M = x/10000;
    m = (x - M*10000)/1000;
    c = (x - M*10000 - m*1000)/100;
    d = (x - M*10000 - m*1000 - c*100)/10;
    u = x - M*10000 - m*1000 - c*100 - d*10;

    if (M == u && m ==d) {
        printf("O número %d é um palíndromo.", x);
    } else {
        printf("O número %d não é um palíndromo.", x);
    }
    return 0;
}