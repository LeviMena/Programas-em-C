#include <stdio.h>

int main() {
    for (int decimal = 1; decimal <= 256; decimal++) {
        printf("Decimal: %d\n", decimal);
        printf("Hexadecimal: %X\n", decimal);
        printf("Octal: %o\n", decimal);
        printf("\n");
    }
    return 0;
}
