#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float media;
} Aluno;

int main() {
    int quantidade;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    Aluno* alunos = (Aluno*) malloc(quantidade * sizeof(Aluno));

    for (int i = 0; i < quantidade; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);

        printf("Digite a primeira nota: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }

    printf("\nLista de alunos com suas médias:\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\nAluno: %s", alunos[i].nome);
        printf("\nPrimeira nota: %.2f", alunos[i].nota1);
        printf("\nSegunda nota: %.2f", alunos[i].nota2);
        printf("\nMédia: %.2f\n", alunos[i].media);
    }

    free(alunos);

    return 0;
}