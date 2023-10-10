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

    // Copia a primeira string para o resultado
    strcpy(resultado, string1);

    // Concatena a segunda string no resultado
    strcat(resultado, string2);

    // Apresenta a string resultante
    printf("A string concatenada é: %s\n", resultado);

    return 0;
}

/*
//versão com strcat
#include <stdio.h>
#include <string.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

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

    // Usa a função strcat() para concatenar as strings
    strcat(string1, string2);

    // Apresenta a string resultante
    printf("A string concatenada é: %s\n", string1);

    return 0;
}
*/