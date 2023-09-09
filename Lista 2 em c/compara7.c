#include <stdio.h>

int main() {
    
    int numero, digito, contagem = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    numero = (numero < 0) ? -numero : numero;

    while (numero > 0) {
        digito = numero % 10;
        if (digito == 7) {
            contagem++;
        }
        numero /= 10;
    }
    printf("O número de dígitos 7 no número digitado é: %d\n", contagem);

    return 0;
}