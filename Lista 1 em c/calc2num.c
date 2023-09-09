#include <stdio.h>
#include <math.h>

int main(){
    
    float x,y;
    printf("Qual o primeiro número desejado? ");
    scanf("%f", &x);
    printf("Qual o segundo número desejado? ");
    scanf("%f", &y);

    printf("A sua soma é: %.2f\n",x+y);
    printf("O seu produto é: %.2f\n",x*y);
    printf("A sua diferença é: %.2f\n",x-y);
    printf("A sua divisão é: %.2f\n",x/y);
    printf("O seu resto é: %.2f\n", fmod(x, y));

    return 0;
}
