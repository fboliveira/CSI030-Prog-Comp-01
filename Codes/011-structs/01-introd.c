#include <stdio.h>
#include <stdlib.h>

typedef int INTEIRO;

typedef struct N {
    float prova1;
    float prova2;
    float prova3;
    float prova4;
} Notas;

struct Pessoa {

    int matricula;
    char nome[101];
    int idade;

    Notas notas;

    float provas[4];

};

typedef struct Pessoa Pessoa;

void ler_turma(Pessoa turma[], int n) {

    int i, j;

    for(i = 0; i < n; i++) {
        printf("Nome: ");
        scanf("%[^\n]s", turma[i].nome);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        printf("Idade: ");
        scanf("%d", &turma[i].idade);

        printf("Nota 1: ");
        scanf("%f", &turma[i].notas.prova1);

        for(j = 0; j < 4; j++) {
            scanf("%f", &turma[i].provas[j]);
        }

    }

}

int main(int argc, char const *argv[]) {

    int x, y;
    INTEIRO w;

    struct Pessoa pedro, joao, ana;

    scanf("%d", &pedro.matricula);
    scanf("%d", &joao.matricula);
    scanf("%d", &ana.matricula);

    struct Pessoa turma_prog[36];
    Pessoa turma_web[40];

    Pessoa *turma;

    turma = (Pessoa *) malloc( 10 * sizeof(Pessoa));

    return 0;
}