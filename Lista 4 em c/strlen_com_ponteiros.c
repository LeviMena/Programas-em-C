#include <stdio.h>

int main() {
    char string[100]; 

    printf("Digite uma string: ");
    fgets(string,  100, stdin);

    // Conta caracteres
    char *ptr = string;
    int tamanho = -1;

    while (*ptr != '\0') {
        tamanho++;
        ptr++;
    }

    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}