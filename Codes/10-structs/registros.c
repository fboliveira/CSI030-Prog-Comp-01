#include <stdio.h>
#include <stdlib.h>

typedef int inteiro;

typedef struct Ponto {
    float x;
    float y;
} Ponto;


typedef struct Data {
    int dia;
    int mes;
    int ano;    
} Data;


typedef struct P
{
    char nome[101];
    int idade;
    Data nascimento;
    Data ingresso;
    float notas[3];
    int resultado; // 0 - reprovado; 1 - aprovado.
} Pessoa;

void lerDados(Pessoa turma[], int n) {

    int i, j;
    float soma;

    for(i = 0; i < n; i++) {
        scanf("%s", turma[i].nome);
        scanf("%d", &turma[i].idade);

        scanf("%d", &turma[i].nascimento.dia);
        scanf("%d", &turma[i].nascimento.mes);
        scanf("%d", &turma[i].nascimento.ano);

        soma = 0;
        for(j = 0; j < 3; j++) {
            scanf("%f", &turma[i].notas[j]);
            soma += turma[i].notas[j];
        }

        if (soma >= 6) {
            turma[i].resultado = 1;
        } else {
            turma[i].resultado = 0;
        }

    }

}

int main(int argc, char const *argv[]) {

    inteiro x;

    Pessoa gabriel;
    Pessoa turma[40];

    lerDados(turma, 40);

    Pessoa *curso = (Pessoa *) malloc(200 * sizeof(Pessoa));

    curso[0].idade = 20;

    free(curso);

    int n = 5;
    Ponto cidades[n];

    cidades[0].x


    return 0;
}