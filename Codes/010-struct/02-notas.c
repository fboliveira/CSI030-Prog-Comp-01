#include <stdio.h>

typedef struct Discente {
    char nome[101];
    float notas[3];
    float media;
    int resultado; // 0 - R; 1 - A
} Discente;

void ler_dados(Discente turma[], int n) {
    int i, j;
    printf("Digite os dados: \n");
    for(i = 0; i < n; i++) {
        printf("Discente: %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", turma[i].nome);

        for(j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]);
        }

    }
}

void imprimir_dados(Discente turma[], int n) {
    int i, j;
    printf("Dados da turma: \n");
    for(i = 0; i < n; i++) {
        printf("Discente: %d\n", i + 1);
        printf("Nome: %s\n", turma[i].nome);

        for(j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, turma[i].notas[j]);
        }

        printf("Media: %.2f\n", turma[i].media);

        printf("Resultado: ");
        if (turma[i].media >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
}

void calcular_resultado(Discente turma[], int n) {
    int i, j;
    float soma;

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


int main(int argc, char const *argv[]) {

    int n;
    printf("Digite a quantidade: ");
    scanf("%d", &n);

    Discente turma[n];

    ler_dados(turma, n);
    calcular_resultado(turma, n);
    imprimir_dados(turma, n);
    
    return 0;
}