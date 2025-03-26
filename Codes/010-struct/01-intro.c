#include <stdio.h>
#include <stdlib.h>

typedef int INTEIRO;

typedef struct Notas {
    float nota1;
    float nota2;
    float nota3;

    float media;
    int resultado; // 0 - Reprovado; 1 - Aprovado
} Notas;

// typedef struct Notas Notas;

struct Pessoa {
    int matricula;
    char nome[101];
    //float notas[3];
    Notas notas;
};

typedef struct Pessoa Discente;

void ler_dados(Discente turma[]) {
    INTEIRO i;
    for(i = 0; i < 50; i++) {
        scanf("%d", &turma[i].matricula);
        scanf("%f", &turma[i].notas.nota1);
    }
}

int main(int argc, char const *argv[]) {

    struct Pessoa ana, pedro, joao;
    Discente turma[50];
    // int i;

    Discente *hugo;
    hugo = (Discente *) malloc(sizeof(Discente));

    (*hugo).matricula = 10;
    hugo->matricula = 20;

    Discente *turmaEE;
    turmaEE = (Discente *) malloc(30 * sizeof(Discente));

    turmaEE[0].matricula = 1;
    // turmaEE->matricula ???
    // Discente a* = &turmaEE[0];
    // a->matricula = 1;


    scanf("%d", &ana.matricula);
    scanf("%d", &pedro.matricula);
    scanf("%d", &joao.matricula);

    // for(i = 0; i < 50; i++) {
    //     scanf("%d", &turma[i].matricula);
    // }

    ler_dados(turma);

    return 0;
}