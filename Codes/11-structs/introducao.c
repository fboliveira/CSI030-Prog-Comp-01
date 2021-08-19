#include <stdio.h>
#include <stdlib.h>

typedef int inteiro;

typedef struct Pessoa {

    char nome[100]; // Fernando
    float altura; // 1.70
    int idade; // 25
    char genero; // F, M, N, ?

} Pessoa;

// typedef struct Pessoa P;

void lerDadosPessoa(Pessoa turma[], int n) {

    int i;
    for(i = 0; i < n; i++) {
        scanf("%s", turma[i].nome);
        scanf("%f", &turma[i].altura);
        scanf("%d", &turma[i].idade);
        scanf("%c", &turma[i].genero);
    }

}


int main(int argc, char const *argv[])
{
    inteiro contador;
    int n = 45;
    char nome[n][100];
    float altura[n];
    int idade[n];
    char genero[n][2];

    Pessoa fernando;
    fernando.altura = 1.7;

    Pessoa turma[n];

    Pessoa *turmaPont = (Pessoa*) malloc(n * sizeof(Pessoa));

    lerDadosPessoa(turma, n);
    lerDadosPessoa(turmaPont, n);

    return 0;
}
