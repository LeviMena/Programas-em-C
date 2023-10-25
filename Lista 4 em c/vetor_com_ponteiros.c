#include <stdio.h>

int main() {
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Tamanho do vetor inválido.\n");
        return 1;
    }
    
    // Use um vetor de tipo de dados desejado (int, double, char, etc.)
    char vetor[n]; // Substitua 'char' pelo tipo desejado

    // Preencha o vetor com os valores inseridos pelo usuário
    for (int i = 0; i < n; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf(" %c", &vetor[i]); // Observe o espaço em branco no formato
    }

    // Imprima os valores e endereços dos elementos do vetor
    printf("Valores e Endereços dos Elementos do Vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: Valor = %c, Endereço = %p\n", i, vetor[i], (void *)&vetor[i]);
    }
    return 0;
}
