#include <stdio.h>
#define QTD 3

int main() {

    double notas[QTD];
    double media = 0.0;
    
    for (int i = 0; i < QTD; i++) {
        printf("Digite a nota: ");
        scanf("%lf", &notas[i]);
        media += notas[i];
    }
    printf("A média entre eles será: %.2lf\n", media / QTD);
    return 0;
}
