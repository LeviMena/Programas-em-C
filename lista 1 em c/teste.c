#include <stdio.h>

int main() {
    char c;
    int n, p = 0, r = 0, b = 0, nulo = 0, eleito, votos = 0, v;

    while (1) {
        printf("Digite um número (Negativo encerra): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("A votação encerrou.\n");
            
            votos = p + r + b + nulo;
            
            if (p > r) {
                eleito = 5;
                v = (p * 100) / votos;
            } else if (r > p) {
                eleito = 7;
                v = (r * 100) / votos;
            } else {
                eleito = 0;
                v = 0;
            }
            
            printf("Quem ganhou a eleição foi %d com %d porcento de votos\n", eleito, v);
            printf("A quantidade de votos totais foi %d\n", votos);
            printf("A quantidade de votos em branco foi %d\n", b);
            printf("A quantidade de votos nulos foi %d\n", nulo);
            break;
        }

        if (n == 5 || n == 7 || n == 0) {
            printf("Confirma? (sim/nao): ");
            scanf(" %c", &c); // Espaço antes do %c para ignorar espaços em branco
            if (c == 's' || c == 'S') {
                if (n == 5) {
                    p++;
                } else if (n == 7) {
                    r++;
                } else {
                    b++;
                }
            }
        } else {
            nulo++;
        }
    }
    return 0;
}
