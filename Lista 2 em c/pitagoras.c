#include <stdio.h>

int main() {
    int a, b, c;

    printf("Triângulos retângulos com lados menores que 500:\n");

    for (a = 1; a < 500; a++) {
        for (b = a; b < 500; b++) {
            for (c = b; c < 500; c++) {
                if (a + b > c) {  // Condição de existência de um triângulo
                    if (a * a + b * b == c * c) {  // Teorema de Pitágoras
                        printf("%d, %d, %d\n", a, b, c);
                    }
                }
            }
        }
    }
    return 0;
}