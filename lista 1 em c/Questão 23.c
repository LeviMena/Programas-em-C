#include <stdio.h>

int main(){
    
    int x, c, d, u;
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &x);

    c = x/100;
    d = (x - c*100)/10;
    u = x - c*100 - d*10;

    printf("O inverso desse valor será: %d", u);
    printf("%d",d);
    printf("%d",c);

    return 0;
}
