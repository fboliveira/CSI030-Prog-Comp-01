#include <stdio.h>

typedef struct Notas {

    int matricula;
    float notas[3];
    char nome[101];
    float media;
    int resultado; // 1 - Aprovado (media >= 6); 0 - Reprovado

} Notas;

void calcular_resultado(Notas turma[], int n) {

    float soma;

    for(int i = 0; i < n; i++) {
        soma = 0;

        for(int j = 0; j < 3; j++) {
            soma += turma[i].notas[j];
        }

        turma[i].media = (soma / 3.0);

        if (turma[i].media >= 6.0) {
            turma[i].resultado = 1;
        } else {
            turma[i].resultado = 0;
        }

    }

}

void imprimir(Notas turma[], int n) {

    for(int i = 0; i < n; i++) {
        printf("Discente: %d\n", i + 1);
        printf("Matricula: %d\n", turma[i].matricula);
        printf("Nome: %s\n", turma[i].nome);

        for(int j = 0; j < 3; j++) {
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

    Notas turma[n];

    printf("Digite os dados das pessoas:\n ");

    for(int i = 0; i < n; i++) {

        printf("Discente: %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]s", turma[i].nome);

        for(int j = 0; j < 3; j++) {
            printf("Nota %d:", j + 1);
            scanf("%f", &turma[i].notas[j]);
        }

    }

    calcular_resultado(turma, n);

    printf("Dados registrados:\n");
    imprimir(turma, n);

    return 0;
}