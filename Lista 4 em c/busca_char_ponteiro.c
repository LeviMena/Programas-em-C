#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char string[100];
    char caractere;
    bool encontrado = false;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    char *ptr = string; // Ponteiro para percorrer a string

    while (*ptr != '\0') {
        if (*ptr == caractere) {
            encontrado = true;
            break;
        }
        ptr++;
    }

    if (encontrado) {
        printf("A string contém o caractere '%c'.\n", caractere);
    } else {
        printf("A string não contém o caractere '%c'.\n", caractere);
    }

    return 0;
}