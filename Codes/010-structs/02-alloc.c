#include <stdio.h>
#include <stdlib.h>

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
    // float nota1;
    // float nota2;
    // float nota4;
} Pessoa;

Pessoa* aloca_pessoa() {
    return (Pessoa *)malloc(sizeof(Pessoa));
}

int main(int argc, char const *argv[]) {

    Pessoa pedro;
    Pessoa turma[50];
    int n = 10;

    // Tipo *ponteiro = (Tipo *)malloc(quantidade * sizeof(Tipo))
    Pessoa *joao = (Pessoa *)malloc(1 * sizeof(Pessoa));

    Pessoa *ana = (Pessoa *)malloc(1 * sizeof(Pessoa));

    Pessoa *turma_alloc = (Pessoa *)malloc(n * sizeof(Pessoa));

    printf("%d\n", turma[0].idade);

    return 0;
}