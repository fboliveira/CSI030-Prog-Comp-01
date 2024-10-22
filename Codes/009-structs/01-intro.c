#include <stdio.h>
#include <stdlib.h>

typedef int INTEIRO;

typedef struct Notas {
    float prova1;
    float prova2;
    float prova3;
    float prova4;

    float lista[10];
} Avaliacoes;

struct Pessoa {
    char nome[100];
    float altura;
    int idade;
    char genero;

    Avaliacoes notas;

    int matricula;
}
//       <tipo>        <alias>
typedef struct Pessoa Pessoa;

void ler_dados(Pessoa turma[], int n) {
    for(int i = 0; i < n; i++) {
        turma[i].notas.prova4;

        for(int j = 0; j < 10; j++) {
            turma[i].notas.lista[j];
        }
    }
}


int main(int argc, char const *argv[]) {

    int x;
    INTEIRO y;
    Pessoa pedro, joao, ana;

    scanf("%d", &pedro.matricula);
    scanf("%d", &ana.matricula);
    scanf("%d", &joao.matricula);

    printf("Matricula: %d\n", pedro.matricula);

    struct Pessoa turmaProg[40];

    for(int i = 0; i < 40; i++) {
        scanf("%d", turmaProg[i].matricula);
    }

    struct Pessoa *turma;

    turma = (struct Pessoa *) malloc (40 * sizeof(struct Pessoa));

    return 0;
}