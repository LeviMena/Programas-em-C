#include <stdio.h>

int main() {
    
    int n, i;
    double pi = 0.0;

    printf("Digite o número de termos para calcular o valor de pi: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi += 4.0 / (2.0 * i + 1);
        } else {
            pi -= 4.0 / (2.0 * i + 1);
        }
    }
    printf("O valor estimado de pi com %d termos é: %lf\n", n, pi);

    return 0;
}
