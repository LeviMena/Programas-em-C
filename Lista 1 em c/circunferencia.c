#include <stdio.h>

int main() {
    
    float raio;
    printf("Qual o raio da circunferência? ");
    scanf("%f", &raio);

    printf("O comprimento da circunferência será: %.2f \n", 2*3.14159*raio);
    printf("A área da circunferência é: %.2f", 3.14159*raio*raio);
    
    return 0;
}
