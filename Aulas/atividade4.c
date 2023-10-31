#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
};

int main() {
    int quantidadeAlunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    struct Aluno alunos[quantidadeAlunos];

    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("\nDigite os dados do aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < quantidadeAlunos; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Média: %.2f\n", media);
        printf("\n");
    }

    return 0;
}