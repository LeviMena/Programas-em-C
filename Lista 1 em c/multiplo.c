#include <stdio.h>

int main (){
    
    int x, y;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite outro número: ");
    scanf("%d", &y);

    printf("O número %d é %s ", x, (x % y == 0 ? "múltiplo" : "não múltiplo"));

    return 0;
}
