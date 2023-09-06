#include <stdio.h>

int main() {
    int i;
    unsigned char x, index;
    printf("Digite um número de 8 bits: ");
    scanf("%c", &x);

    for (i =1; i <8; i++) {
        unsigned char index = (x >> i) &1;
    }
    if (index = 0) {
            printf("O equipamento %d está desligado\n", i);
        } else {
            printf("O equipamento %d está ligado\n", i);
        }
    return 0;
}