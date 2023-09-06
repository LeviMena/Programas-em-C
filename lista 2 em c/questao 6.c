#include <stdio.h>
#include <string.h>

int main() {
    
    char c;
    int n, p = 0, r = 0, b = 0, nulo = 0, eleito, votos = 0, v;

    while (1) {
        printf("Digite um número(Negativo encerra): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("A votação encerrou.\n");
            votos = p + r + b + nulo;
            if (p > r) {
                eleito = p;
                v = p*100/votos;
            } else {
                eleito = r;
                v = r*100/votos;
            }
            printf("Quem ganhou a eleição foi %d com %d porcento de votos\n", eleito, v);
            printf("A quantidade de votos totais foi %d\n", votos);
            printf("A quantidade de votos em branco foi %d\n", b);
            printf("A quantidade de votos nulos foi %d\n", nulo);
            break;
        }
        if (n == 5) {
            printf("Confirma? ");
            scanf("%s", &c);
            switch (c)
            {
            case 'sim':
                r++;
                break;

            default:
                break;
            }   
        }
        if (n ==7) {
            printf("Confirma? ");
            scanf("%s", &c);
            switch (c)
            {
            case 'sim':
                r++;
                break;

            default:
                break;
            }
        }
        if (n == 0) {
            printf("Confirma? ");
            scanf("%s", &c);
            switch (c)
            {
            case 'sim':
                p++;
                break;

            default:
                break;
            }
        }
        else {
            nulo++;
        }
    }
    return 0;
}  