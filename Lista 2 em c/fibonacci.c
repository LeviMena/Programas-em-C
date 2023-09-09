#include <stdio.h>


int main() {

    int i, n, next, num1 = 0, num2 = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    printf("A sequência de fibonacci para %d termos será: \n", n);
    for (i = 0; i <= n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = num1 + num2;
            num1 = num2;
            num2 = next;
        }
        
        printf("%d, ", next);
    }
    printf("\n");

    return 0;
}