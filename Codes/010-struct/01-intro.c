#include <stdio.h>

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

    scanf("%d", &ana.matricula);
    scanf("%d", &pedro.matricula);
    scanf("%d", &joao.matricula);

    // for(i = 0; i < 50; i++) {
    //     scanf("%d", &turma[i].matricula);
    // }

    ler_dados(turma);

    return 0;
}