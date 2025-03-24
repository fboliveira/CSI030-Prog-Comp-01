#include <stdio.h>

typedef struct Discente {
    int matricula;
    char nome[101];
    float notas[3];
} Discente;

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

    }
}

int main(int argc, char const *argv[]) {

    int n;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);

    Discente turma[n];
    ler_dados(turma, n);
    imprimir_dados(turma, n);

    return 0;
}