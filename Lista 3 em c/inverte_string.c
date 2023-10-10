#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    // Solicita ao usuário que insira a string
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    // Remove o caractere de quebra de linha '\n', se estiver presente
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    // Apresenta a string na forma inversa
    printf("A string na forma inversa é: ");
    for (int i = strlen(string) - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}