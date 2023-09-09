#include <stdio.h>

int main() {
    
    int n;
    int maior = -99999999;
    int menor = 99999999;
    
    while (1) {
        printf("Digite um número(Em negativo par o programa reinicia): ");
        scanf("%d", &n);

        if (n < 0 && n % 2 ==0) {
            printf("O programa encerrou.");
            break;
        }
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
        printf("O menor valor é %d\n", menor);
        printf("O maior valor é %d\n", maior);
        printf("O produto entre eles é %d\n", maior*menor);
    }
    return 0;
}