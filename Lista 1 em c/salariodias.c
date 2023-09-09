#include <stdio.h>

int main() {
    float horas, horaAula, inss;

    printf("Olá, professor! \n");
    printf("Qual o valor da sua hora aula? ");
    scanf("%f", &horaAula);
    printf("Quantas horas trabalhadas no mês? ");
    scanf("%f", &horas);
    printf("Quanto de desconto do INSS? ");
    scanf("%f", &inss);

    printf("Seu salário bruto será de: %.2f \n", horas*horaAula);
    printf("Seu salário líquido será de: %.2f \n", (100 - inss)/100*horas*horaAula);

    return 0;
} 
