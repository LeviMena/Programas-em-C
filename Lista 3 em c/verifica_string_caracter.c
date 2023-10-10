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

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        printf("A string contém o caractere '%c'.\n", caractere);
    } else {
        printf("A string não contém o caractere '%c'.\n", caractere);
    }

    return 0;
}
