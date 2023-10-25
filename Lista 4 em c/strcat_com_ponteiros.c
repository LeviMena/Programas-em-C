#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    char resultado[200]; // Espaço suficiente para a concatenação

    // Solicita ao usuário que insira as duas strings
    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    // Remove o caractere de quebra de linha '\n', se estiver presente
    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }

    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    // Ponteiros para as strings
    char *ptr1 = string1;
    char *ptr2 = string2;
    char *ptrResultado = resultado;

    // Copia a primeira string para o resultado
    while (*ptr1 != '\0') {
        *ptrResultado = *ptr1;
        ptr1++;
        ptrResultado++;
    }

    // Concatena a segunda string no resultado
    while (*ptr2 != '\0') {
        *ptrResultado = *ptr2;
        ptr2++;
        ptrResultado++;
    }

    *ptrResultado = '\0'; // Adiciona o caractere nulo para indicar o final da string resultante

    // Apresenta a string resultante
    printf("A string concatenada é: %s\n", resultado);

    return 0;
}
