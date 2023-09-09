#include <stdio.h>
#include <math.h>

int main() {
    double decimal;
    printf("Digite um número decimal: ");
    scanf("%lf", &decimal);

    int hexadecimal = (int)decimal;
    printf("Hexadecimal: %X\n", hexadecimal);

    int octal = (int)decimal;
    printf("Octal: %o\n", octal);

    return 0;
}
