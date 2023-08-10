#include <stdio.h>
#include <string.h>

#include <stdlib.h>


typedef struct notas {
    float notas1;
    float notas2;
    float notas3;
} Notas;

// typedef struct notas Notas;

struct discente {
    int matricula;
    char nome[101];
    Notas provas;
    // float nota1;
    // float nota2;
    // float nota3;
    // float notas[3];
    float media;
};

typedef int INTEIRO;
typedef float DECIMAL;

typedef struct discente Discente;

typedef struct lista {

    Discente discente;
    Discente *proximo;

} ListaDiscente;

int main(int argc, char const *argv[]) {

    struct discente pessoa1;
    Discente turma[50];

    int n = 10;

    Discente *turma2;
    
    turma2 = ( Discente *) malloc( n * sizeof(Discente) );

    INTEIRO i;
    DECIMAL soma;

    printf("Digite a matricula: ");
    scanf("%d", &pessoa1.matricula);

    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]s", pessoa1.nome);
    strcpy(pessoa1.nome , "Fernando");

    printf("Digite a nota 1: ");
    scanf("%f", &pessoa1.provas.notas1);

    printf("Digite a nota 2: ");
    scanf("%f", &pessoa1.provas.notas2);

    printf("Digite a nota 3: ");
    scanf("%f", &pessoa1.provas.notas3);

    soma = pessoa1.provas.notas1 + pessoa1.provas.notas2 + pessoa1.provas.notas3;
    pessoa1.media = soma / 3;


    for(i = 0; i < 50; i++) {
        printf("Digite a matricula: ");
        scanf("%d", &turma[i].matricula);
    }

    for(i = 0; i < n; i++) {
        printf("Digite a matricula: ");
        scanf("%d", &turma2[i].matricula);
    }

    Discente *pessoa2;
    pessoa2 = &pessoa1;

    (*pessoa2).matricula = 10;
    pessoa2->matricula = 10;

    return 0;
}