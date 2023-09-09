#include <stdio.h>
#include <math.h>

int main(){
    
    float x, n;
    printf("Digite um número inteiro: ");
    scanf("%f", &x);
    printf("Digite a potência de 2 que vai ser multiplicada: ");
    scanf("%f", &n);

    printf("O resultado será: %.2f", x*pow(2,n));
    return 0;
}
