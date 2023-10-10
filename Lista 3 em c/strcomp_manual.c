#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool saoIguais(char string1[], char string2[]) {
    int i = 0;

    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            return false;
        }
        i++;
    }

    return string1[i] == '\0' && string2[i] == '\0';
}

int main() {
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);


    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }
    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    bool iguais = saoIguais(string1, string2);

    if (iguais) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}

/*Código usando o strcomp:
#include <stdio.h>
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

    // Compara as strings usando strcmp()
    int resultado = strcmp(string1, string2);

    // Apresenta o resultado
    if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
*/