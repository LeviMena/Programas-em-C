#include <stdio.h>

int main(){
    
    int x, h, m, s;
    printf("Digite quantos segundos calcular: ");
    scanf("%d", &x);
    
    h = x/3600;
    m = (x % 3600) /60;
    s = (x % 3600) %60;

    printf("O valor exato é %d hora(s)", h);
    printf(", %d minuto(s)", m);
    printf(" e %d segundo(s)", s);
    return 0;
}
