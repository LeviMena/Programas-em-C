#include <stdio.h>
#include <math.h>

int main(){
    
    float x1, y1, x2, y2;
    printf("Digite a coordenada x: ");
    scanf("%f", &x1);
    printf("Digite a coordernada y: ");
    scanf("%f", &y1);
    printf("Digite a outra coordenada x: ");
    scanf("%f", &x2);
    printf("Digite a outra coordernada y: ");
    scanf("%f", &y2);
    
    printf("A distância entre os dois pontos vale: %.2f", sqrt(pow(x2-x1,2) + pow(y2-y1,2)));
    return 0;
}
