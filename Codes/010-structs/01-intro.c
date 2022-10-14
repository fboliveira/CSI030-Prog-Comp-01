#include <stdio.h>

typedef struct End {

    char rua[51];
    int numero;
    char bairro[51];
    char cidade[51];

} Endereco;

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;


typedef struct Pessoa {
    int idade;
    float altura;
    char nome[101];
    Endereco endereco;
    Data data_nascimento;
    float notas[3];
    float media;
    int resultado; // 1 - aprovado; 0 - reprovado;
    // float nota1;
    // float nota2;
    // float nota4;
} Person;

typedef int INTEIRO;
typedef struct Pessoa Individuo;


void imprimir_dados_da_turma(Individuo turma[], int n ) {

}


int main(int argc, char const *argv[]) {

    // int idade[50];
    // float altura[50];

    int i, j, n = 50;
    int soma_idades = 0;
    float media_idades;

    int x;
    INTEIRO w;

    struct Pessoa pedro;
    struct Pessoa joao;
    struct Pessoa yan;
    struct Pessoa turma[n];

    float coeficientes[n];

    scanf("%s", joao.nome);
    yan.idade = 20;

    printf("Digite os dados do Pedro: ");
    scanf("%s", pedro.nome);
    scanf("%d", &pedro.idade);
    scanf("%f", &pedro.altura);
    scanf(" %s", pedro.endereco.rua);
    scanf("%d", &pedro.endereco.numero);

    scanf("%d", &pedro.data_nascimento.dia);

    scanf("%f", &pedro.notas[0]);
    scanf("%f", &pedro.notas[1]);
    scanf("%f", &pedro.notas[2]);

    printf("Digite os dados da turma: ");
    for(i = 0; i < n; i++) {
        printf("Digite os dados do discente %d: ", i + 1);

        scanf("%s", turma[i].nome);
        scanf("%d", &turma[i].idade);
        scanf("%f", &turma[i].altura);

        for(j = 0; j < 3; j++){
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]);
        }

    }

    for(i = 0; i < n; i++) {
        soma_idades += turma[i].idade;
    }

    media_idades = (float)soma_idades / n;


    return 0;
}