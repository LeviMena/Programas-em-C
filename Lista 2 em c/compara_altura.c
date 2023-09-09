#include <stdio.h>

int main() {
    
    int j = 150;
    int p = 110;
    int anos = 0;
    
    while (p <= j) {
        j +=2;
        p +=3;
        anos ++;
    }
    printf("Em %d anos Pedro será maior que João.", anos);
    
    return 0;
}