#include <stdio.h>

int main() {

    int i;

    printf("A sequência de quadrados dos múltiplos de 4 será: \n");
    for (i = 15; i <= 90; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i * i);
        }
    }
    printf("\n");

    return 0;
}