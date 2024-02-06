#include <stdio.h>

typedef struct Notas {

    int matricula;
    float notas[3];
    char nome[101];

    // float nota1;
    // float nota2;
    // float nota3;

    float media;
    int resultado; // 1 - Aprovado ; 0 - Reprovado

} Notas;

int main(int argc, char const *argv[]) {

    int n, i, j;
    float soma;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    Notas turma[n];
    
    printf("Digite os dados das pessoas: ");

    for(i = 0; i < n; i++) {
        printf("Discente: %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nome:");
        scanf(" %[^\n]s", turma[i].nome);
        // gets(turma[i].nome);
        printf("Notas: \n");

        for(j = 0; j < 3; j++) {
            printf("Nota %d\n", j + 1);
            scanf("%f", &turma[i].notas[j]);
        }

    }

    for(i = 0; i < n; i++) {
        soma = 0;
        for(j = 0; j < 3; j++) {
            soma += turma[i].notas[j];
        }

        turma[i].media = soma / 3.0;

        if ( turma[i].media >= 6) {
            turma[i].resultado = 1;
        } else {
            turma[i].resultado = 0;
        }



    }

    return 0;
}