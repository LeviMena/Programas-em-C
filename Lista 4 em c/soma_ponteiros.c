#include <stdio.h>

int main() {
    int n1, n2, soma;
    int *ptr_n1, *ptr_n2, *ptr_soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    ptr_n1 = &n1;
    ptr_n2 = &n2;
    ptr_soma = &soma;

    *ptr_soma = *ptr_n1 + *ptr_n2;

    printf("A soma de %d e %d fica no endereço %p e equivale a: %d\n", *ptr_n1, *ptr_n2, (void *)ptr_soma, *ptr_soma);
    return 0;
}
