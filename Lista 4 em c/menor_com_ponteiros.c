#include <stdio.h>
#include <limits.h> // Para INT_MAX

int main() {
    
    int n;

    int menor = INT_MAX;
    int *ptrmenor= &menor;
    
    while (1) {
        printf("Digite um número(Em negativo par o programa encerra): ");
        scanf("%d", &n);

        if (n < 0 && n % 2 ==0) {
            printf("O programa encerrou com o menor número da lista sendo: %d", *ptrmenor);
            break;
        }
        if (n < *ptrmenor) {
            *ptrmenor = n;
        }
        printf("O menor valor é %d\n", *ptrmenor);
    }
    return 0;
}