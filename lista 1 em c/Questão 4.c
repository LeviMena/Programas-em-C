#include <stdio.h>

int main(){
    
    int x;
    printf("Escreva um número inteiro: ");
    scanf("%d", &x);

    printf("O seu triplo é: %d\n",x*3);
    printf("O seu quadrado é: %d\n",x*x);
    printf("O seu meio é: %.2f\n",((float)x)/2);

    return 0;
}
