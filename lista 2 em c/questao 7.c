#include <stdio.h>

int main() {
    
    float n, d;
    
    while (1) {
        printf("Digite o numerador: \n");
        scanf("%f", &n);
        printf("Digite o denominador: \n");
        scanf("%f", &d);

        if (d != 0) {
            printf("A divisão deles resulta em: %.2f.", n/d);
            break;
        }
    }
    return 0;
}