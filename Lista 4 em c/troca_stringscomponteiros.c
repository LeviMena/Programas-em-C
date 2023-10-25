#include <stdio.h>

int main() {
    char string_1[100];
    char string_2[100];

    // Solicita ao usuário que insira a string de origem
    printf("Digite a string de 1: ");
    fgets(string_1, sizeof(string_1), stdin);

    printf("Digite a string de 2: ");
    fgets(string_2, sizeof(string_2), stdin);

    // Ponteiros para as strings de origem e destino
    char *ptr_1 = string_1;
    char *ptr_2 = string_2;

    // Copia a string de origem para a de destino usando ponteiros
    while (*ptr_1 != '\0') {
        *ptr_1 = *ptr_2;
        ptr_1++;
        ptr_2++;
    }
    *ptr_2 = '\0'; // Adiciona o caractere nulo para indicar o fim da string destino

    // Apresenta a string destino
    printf("A string 1 passa a valer: %s\n", string_2);

    return 0;
}
