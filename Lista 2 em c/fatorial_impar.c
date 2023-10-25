#include <stdio.h>

int main() {
    
    int x, i, fat = 1;
    
    printf("O fatorial dos ímpares até 10 será: \n");

    for (x = 1; x <= 10; x += 2) {
        fat = 1;
        for (i = 1; i <= x; i++) {
            fat *= i;
        }
        printf("O fatorial de %d vale: %d \n", x, fat);
    }
    return 0;
}
