#include <stdio.h>
#include <stdlib.h>

typedef int INTEIRO;

struct Notas {
    float nota1;
    float nota2;
    float nota3;

    float media;
    int resultado;
};

typedef struct Notas Notas;

typedef struct Pessoa {
    int matricula;
    float altura;
    char nome[101];
    Notas notas;
} Pessoa;

void ler_dados(Pessoa turma[], int n) {
    INTEIRO i;
    for(i = 0; i < 30; i++) {
        scanf("%d", &turma[i].matricula);
        scanf("%f", &turma[i].altura);
        scanf("%f", &turma[i].notas.nota1);
    }
}


int main(int argc, char const *argv[]) {

    // int matriculas[30];
    // float alturas[30];
    // char nome[30][101];
    // float notas[30][3];

    struct Pessoa ana, pedro, joao;
    Pessoa turma[30];
    int i;

    Pessoa *hugo;
    hugo = (Pessoa *) malloc(sizeof(Pessoa));

    (*hugo).matricula = 10;
    hugo->matricula = 20;

    Pessoa *turmaEX = (Pessoa *) malloc(40 * sizeof(Pessoa));
    turmaEX[0].matricula = 1;

    scanf("%d", &ana.matricula);
    scanf("%d", &pedro.matricula);
    scanf("%d", &joao.matricula);

    ler_dados(turma, 30);

    free(hugo);
    free(turmaEX);

    return 0;
}