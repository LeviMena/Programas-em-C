#include <stdio.h>

int main() {
    
    float temp;
    printf("Qual a temperatura local em Celsius? ");
    scanf("%f", &temp);

    printf("Esta temperatura é o mesmo que: %.1f graus Fahrenheit.", (9*temp+160)/5);

    return 0;
}
