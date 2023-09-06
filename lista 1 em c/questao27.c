#include <stdio.h>
#include <math.h>

int main(){
    
    float x, y, z;
    printf("Digite um valor para x: ");
    scanf("%f", &x);
    printf("Digite um valor para y: ");
    scanf("%f", &y);
    printf("Digite um valor para z: ");
    scanf("%f", &z);

    printf("A média aritmética entre os números é: %.2f \n", (x + y + z)/3);
    printf("A média geométrica deles é: %.2f", pow((x*y*z), 0.333));
    return 0;
}