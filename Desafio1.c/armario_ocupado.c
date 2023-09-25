#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarStatusArmarios(unsigned char armarios) {
    printf("Status dos armários:\n");
    for (int i = 0; i < 8; i++) {
        if ((armarios >> i) & 1) {
            printf("Armário %d: Ocupado\n", i + 1);
        } else {
            printf("Armário %d: Livre\n", i + 1);
        }
    }
}

int main() {
    unsigned char armarios = 0; // Variável de controle com 8 bits iniciais em 0
    int opcao;

    srand(time(NULL)); // Inicializa a semente para números aleatórios

    while (1) {
        mostrarStatusArmarios(armarios);

        printf("Menu:\n");
        printf("1. Ocupar armário.\n");
        printf("2. Liberar armário.\n");
        printf("3. Sair.\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                if (armarios == 0xFF) {
                    printf("Todos os armários estão ocupados.\n");
                } else {
                    int armario;
                    do {
                        armario = rand() % 8; // Escolhe um armário aleatoriamente
                    } while ((armarios >> armario) & 1); // Verifica se o armário já está ocupado

                    armarios |= (1 << armario); // Ocupa o armário
                    printf("Armário %d ocupado.\n", armario + 1);
                }
                break;
            }
            case 2: {
                int armario;
                printf("Digite o número do armário a ser liberado (1-8): ");
                scanf("%d", &armario);

                if (armario >= 1 && armario <= 8) {
                    armario--; // Ajusta para índice 0-7
                    if ((armarios >> armario) & 1) {
                        armarios &= ~(1 << armario); // Libera o armário
                        printf("Armário %d liberado.\n", armario + 1);
                    } else {
                        printf("O armário %d já está desocupado.\n", armario + 1);
                    }
                } else {
                    printf("Número de armário inválido.\n");
                }
                break;
            }
            case 3:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
