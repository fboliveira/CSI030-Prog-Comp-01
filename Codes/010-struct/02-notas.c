#include <stdio.h>
#include <stdlib.h>

typedef struct Discente {
    int matricula;
    char nome[101];
    float notas[3];

    float media;
    int resultado; // 0 - R; 1 - A

} Discente;

typedef struct Matricula {
    Discente *discente;
    int quantidade; //n
} Matricula;

void calcular_resultado(Discente turma[], int n) {
    int i, j;
    float soma = 0;

    for(i = 0; i < n; i++) {
        soma = 0;

        for(j = 0; j < 3; j++) {
            soma += turma[i].notas[j];
        }

        turma[i].media = soma / 3;

        if (turma[i].media >= 6) {
            turma[i].resultado = 1;
        } else {
            turma[i].resultado = 0;
        }

    }
}


void ler_dados(Discente turma[], int n){
    int i, j;
    printf("Digite os dados: ");
    for(i = 0 ; i < n; i++) {
        printf("Discente: %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]s", turma[i].nome);
        printf("Notas: \n");

        for(j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]);
        }

    }
}

void imprimir_dados(Discente turma[], int n){
    int i, j;
    printf("Dados da turma: ");
    for(i = 0 ; i < n; i++) {
        printf("Discente: %d\n", i + 1);
        printf("Matricula: %d\n", turma[i].matricula);
        printf("Nome: %s\n", turma[i].nome);
        printf("Notas: \n");

        for(j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, turma[i].notas[j]);
        }

        printf("Media: %.2f\n", turma[i].media);
        
        printf("Resultado: ");
        if (turma[i].resultado == 1) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }

    }
}

int main(int argc, char const *argv[]) {

    int n;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);

    //Discente turma[n];
    Discente *turma = (Discente *) malloc( n * sizeof(Discente));

    Matricula matricula;
    matricula.discente = (Discente *) malloc( n * sizeof(Discente));
    matricula.quantidade = n;


    ler_dados(turma, n);
    calcular_resultado(turma, n);
    imprimir_dados(turma, n);

    free(turma);
    free(matricula.discente);

    return 0;
}