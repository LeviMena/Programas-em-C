#include <stdio.h>

int main(){
    
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("O número %d é %s ", x, (x % 2 == 0 ? "par" : "ímpar"));
    return 0;
}
