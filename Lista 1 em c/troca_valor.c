#include <stdio.h>

int main(){
    
    int a,b,c;
    printf("Qual o valor inteiro de A? ");
    scanf("%d", &a);
    printf("Qual o valor inteiro de B? ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("A passará a valer %d\n",a);
    printf("B passará a valer %d",b);
    return 0;
}
