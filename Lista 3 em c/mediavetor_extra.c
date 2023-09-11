#include <stdio.h>
#define QTD 3

int main() {

    float notas[QTD];
    float media = 0.0;
    
    for (int i = 0; i < QTD; i++) {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    
    printf("A média entre eles será: %.2f\n", media / QTD);
    return 0;
}
