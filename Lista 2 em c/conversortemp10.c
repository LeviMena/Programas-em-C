#include <stdio.h>

int main() {

    int i;

    printf("As temperaturas entre 10 a 100 graus Celsius equivale em Fahrenheit: \n");

    for (i = 10; i <= 100; i+=10)
    {
        printf("O valor de %d °C equivale a %.f °F\n", i, i*1.8 +32);
    }
    return 0;
}