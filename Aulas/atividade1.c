#include <stdio.h>
//questao 1
struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
};

int main() {
    struct Aluno alunos[10];
    int quantidadeAlunos;

    printf("Digite a quantidade de alunos (no máximo 10): ");
    scanf("%d", &quantidadeAlunos);

    // Realiza a leitura dos dados dos alunos
    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("\nAluno %d\n", i+1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    // Exibe a listagem final dos alunos com suas respectivas médias finais
    printf("\nListagem Final dos Alunos:\n");
    for (int i = 0; i < quantidadeAlunos; i++) {
        float mediaFinal = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;
        printf("\nAluno %d\n", i+1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Código da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Média Final: %.2f\n", mediaFinal);
    }

    return 0;
}