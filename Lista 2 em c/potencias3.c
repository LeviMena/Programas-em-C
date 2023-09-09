#include <stdio.h>
#include <math.h>

int main() {

    int i;
    printf("As potências de 3 entre 0 e 7 serão: \n");

    for (i = 0; i <= 7; i++)
    {
        printf("3 ^%d = %.f\n", i, pow(3, i));
    }
    return 0;
}