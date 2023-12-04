#include <stdio.h>

int main() {
    int num1, num2, codigo_operacao;

    printf("Digite dois valores inteiros e um código de operação por linha.\n");
    printf("Digite 0 para adição e 1 para multiplicação.\n");

    while (1) {
        printf("Digite o primeiro número, o segundo número e o código de operação: ");
        scanf("%d %d %d", &num1, &num2, &codigo_operacao);

        if (codigo_operacao == 0) {
            printf("Resultado: %d\n", num1 + num2);
        } else if (codigo_operacao == 1) {
            printf("Resultado: %d\n", num1 * num2);
        } else {
            printf("Código de operação inválido.\n");
            break;
        }
    }

    return 0;
}