#include <stdio.h>

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Discente {

    char nome[101];
    char curso[31];
    int idade;
    Data nascimento;
    double notas[3]; 
    double coeficiente; // 2 * N1 + 3 * N2 + 4 * N3

} Discente;

int main(int argc, char const *argv[]) {

    int i;
    int j;
    int n;

    printf("Digite a quantidade de discentes: ");
    scanf("%d", &n);

    Discente turma[n];

    for(i = 0; i < n; i++) {
        printf("Discente: %d", i + 1);
        printf("Nome: ");
        // gets(turma[i].nome);
        fgets(turma[i].nome, 100, stdin);
        
        printf("Curso: ")
        gets(turma[i].curso);

        printf("Idade: ");
        scanf("%d", &turma[i].idade);

        printf("Data de nascimento: \n");
        printf("Dia: ");
        scanf("%d", &turma[i].nascimento.dia);
        printf("Mes: ");
        scanf("%d", &turma[i].nascimento.mes);
        printf("Ano: ");
        scanf("%d", &turma[i].nascimento.ano);

        for(j = 0; i < 2; j++) {
            printf("Nota: %d = ", j + 1);
            scanf("%lf", &turma[i].notas[j]);
        }

        turma[i].coeficiente = (2 * turma[i].notas[0]
                + 3 * turma[i].notas[1]
                + 4 * turma[i].notas[2]) / 3;

    }


    return 0;
}