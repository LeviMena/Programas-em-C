#include <stdio.h>
#include <math.h>

int main() {
    
    float valor;

    printf("Qual o valor do produto? ");
    scanf("%f", &valor);

    if (fmod(valor, 3) == 0) {
        printf("O valor da entrada e de suas parcelas é %.2f reais.\n", valor/3);
    
    } else if (fmod(valor, 1) == 0) {
        printf("O valor da entrada será: %.2f reais\n", valor/3 +1);
        printf("O valor das parcelas será igual a %.0f reais\n", valor/3);
    
    } else {
        printf("O valor da entrada será: %.2f reais.\n", valor - (2*(int)valor/3-1));
        printf("O valor das parcelas será: %.0f reais.", valor/3-0.5);
    }   
    return 0;
}