#include <stdio.h>

int main() {
    
    int n;
    int maior = -99999999;
    int menor = 99999999;
    
    while (1) {
        printf("Digite um número(Em 0 o programa reinicia): ");
        scanf("%d", &n);

        if (n == 0) {
            printf("O programa encerrou.");
            break;
        }
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    printf("O maior número é %d\n", maior);
    printf("O menor número é %d\n", menor);
    }
    return 0;
}