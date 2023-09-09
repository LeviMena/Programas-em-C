#include <stdio.h>

int main() {
    
    int fat, x;
    printf("Digite um número: ");
    scanf("%d", &x);

    for(fat = 1; x > 1; x = x - 1) {
        fat = fat * x;
    }
    printf("O fatorial vale: %d \n", fat);

    return 0;
}