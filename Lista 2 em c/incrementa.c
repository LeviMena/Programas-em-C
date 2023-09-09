#include <stdio.h>

int main() {

    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("O valor de i será %d\n", i);
    }
    printf("-----------------------------------\n");
    for (i = 9; i >= 1; i--)
    {
        printf("O valor de i será %d\n", i);
    }
    return 0;
}