#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Professor;

typedef struct {
    char codigo[10];
    char nome[50];
    int capacidade;
    Professor professor;
} Disciplina;

void cadastrar_disciplina(Disciplina* d) {
    printf("Digite o codigo da disciplina: ");
    scanf("%s", d->codigo);

    printf("Digite o nome da disciplina: ");
    scanf("%s", d->nome);

    printf("Digite a capacidade da disciplina: ");
    scanf("%d", &d->capacidade);

    printf("Digite o nome do professor: ");
    scanf("%s", d->professor.nome);

    printf("Digite a idade do professor: ");
    scanf("%d", &d->professor.idade);

    printf("Digite o salario do professor: ");
    scanf("%f", &d->professor.salario);
}

void imprimir_disciplina(Disciplina* d) {
    printf("\nDisciplina: %s - %s\n", d->codigo, d->nome);
    printf("Capacidade: %d\n", d->capacidade);
    printf("Professor: %s\n", d->professor.nome);
    printf("Idade: %d\n", d->professor.idade);
    printf("Salario: %.2f\n", d->professor.salario);
}

int main() {
    Disciplina d;

    cadastrar_disciplina(&d);

    imprimir_disciplina(&d);

    return 0;
}