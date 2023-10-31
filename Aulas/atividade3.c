#include <stdio.h>
#include <string.h>

// Definiçaao de estrutura para endereço
// A)
struct Endereco {
    char rua[100];
    char bairro[50];
    char cidade[50];
    char estado[3];
    char cep[10]
};

// Definiçao de estrutura para o cadastro
struct Cadastro {
    char nome[100];
    char identidade[15];
    char telefone[15];
    struct Endereco endereco
    char cpf[15];
    int idade;
    float salario;
    char estadocivil[20];
    char sexo;
};
// B)
int main() {
    int n
    printf("Quantos cadastros deseja fazer?: ");
    scanf("%d, &n");

    struct Cadastro cadastros [n];

// Coleta de dados preenchando os vetores de cadastro
    for (int i = 0; i < n; i++) {
        printf ("Cadastro %d\n", i + 1);

        printf("nome: ");
        scanf("%s", cadastros[i].nome);
        
        printf("identidade: ");
        scanf("%s", cadastros[i].identidade);

        printf("telefone: ");
        scanf("%s", cadastros[i].telefone);

        printf("rua: ");
        scanf("%s", cadastros[i].Endereco.rua);

        printf("bairro: ");
        scanf("%s", cadastros[i].Endereco.bairro);

        printf("cidade: ");
        scanf("%s", cadastros[i].Endereco.cidade);

        printf("estado: ");
        scanf("%s", cadastros[i].Endereco.estado);

        printf("cep: ");
        scanf("%s", cadastros[i].Endereco.cep);

        printf("cpf: ");
        scanf("%s", cadastros[i].cpf);

        printf("idade: ");
        scanf("%d", cadastros[i].idade);

        printf("salario: ");
        scanf("%f", cadastros[i].salario);

        printf("estadoCivil: ");
        scanf("%s", cadastros[i].estadoCivil);

        printf("sexo: ");
        scanf("%c", cadastros[i].sexo
        );

    };

    char identidade_busca[15];
    printf("Digite uma identidade para busca: ");
    scanf("%s", identidade_busca);

//Eencontrar pessoas do sexo masculino e imprimir
// C e D)
        int maiorIdade = -1; // Inicializa com um valor impossível
    char nomeMaiorIdade[100];

    printf("Pessoas do sexo masculino:\n");
    // Encontra e imprime as pessoas do sexo masculino e busca a maior idade
    for (int i = 0; i < n; i++) {
        if (cadastros[i].sexo == 'M') {
            printf("Nome: %s, Identidade: %s\n", cadastros[i].nome, cadastros[i].identidade);
            if (cadastros[i].idade > maiorIdade) {
                maiorIdade = cadastros[i].idade;
                strcpy(nomeMaiorIdade, cadastros[i].nome);
            };
        };
    };


// Encontrar pessoas com o salario acima de 1000 e imprimir
// E)
    printf("Pessoas com salário acima de 1000:\n");
    // funçao q encontra e imprime as pessoas com salário acima de 1000
    for (int i = 0; i < n; i++) {
        if (cadastros[i].salario > 1000) {
            printf("Nome: %s, Salário: %.2f\n", cadastros[i].nome, cadastros[i].salario);
        }
    }

// Encontrar a imprimir os dados do cadastro com a identidade fornecida.
// F)
    printf("Dados do cadastro com identidade %s:\n", identidade_busca);
    for (int i = 0; i < n; i++) {
        if (strcmp(cadastros[i].identidade, identidade_busca) == 0) {
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Identidade: %s\n", cadastros[i].identidade);
            printf("Telefone: %s\n", cadastros[i].telefone);
            printf("Endereço: %s, %s, %s, %s, %s\n", cadastros[i].endereco.rua, cadastros[i].endereco.bairro, cadastros[i].endereco.cidade, cadastros[i].endereco.estado, cadastros[i].endereco.cep);
            printf("CPF: %s\n", cadastros[i].cpf);
            printf("Idade: %d\n", cadastros[i].idade);
            printf("Salário: %.2f\n", cadastros[i].salario);
            printf("Estado Civil: %s\n", cadastros[i].estadoCivil);
            printf("Sexo: %c\n", cadastros[i].sexo);
        }
    }

    return 0;
};



