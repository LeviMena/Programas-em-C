#include <stdio.h>

int main() {

    int d3 = 0, d5 = 0, i;

    for (i = 0; i <= 200; i++) {
        if (i<=100) {
            if (i % 3 == 0) {
            d3 = d3 + i;
            }   
        } else {
            if (i % 5 == 0) {
            d5 = d5 + i;
            } 
        }    
    }
    printf("O somatório dos divisíveis por 3 no intervalo de 0 a 100 é: %d\n", d3);
    printf("O somatório dos divisíveis por 5 no intervalo de 100 a 200 é: %d", d5);

    return 0;
}