#include <stdio.h>

int main(){
    
    int a,b,c;
    int *ptr_a, *ptr_b, *ptr_c;
    printf("Qual o valor inteiro de A? ");
    scanf("%d", &a);
    printf("Qual o valor inteiro de B? ");
    scanf("%d", &b);

    //Conexão dos valores com seus ponteiros
    ptr_a = &a;
    ptr_b = &b;
    ptr_c = &c;

    //Troca dos valores em seus ponteiros
    *ptr_c = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = *ptr_c;

    printf("A passará a valer %d\n",*ptr_a);
    printf("B passará a valer %d",*ptr_b);
    return 0;
}