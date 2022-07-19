
#include <stdio.h>

typedef struct Data
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Aluno
{
    char nome[101];
    char curso[101];
    int idade;
    Data nascimento;
    double notas[3];
} Aluno;


int main(int argc, char const *argv[]) {

    int n, i, j;
    double coeficiente;

    printf("Digite o numero de pessoas na turma: ")
    scanf("%d", &n);

    Aluno turma[n];
    
    // Leitura dos dados da turma
    for (i = 0; i < n; i++) {
        // Para cada pessoa
        printf("Nome: ");
        scanf(" %s", turma[i].nome);
        printf("Curso: ");
        scanf(" %s", turma[i].curso);
        printf("Idade: ");
        scanf("%d", &turma[i].idade);

        printf("Data de nascimento: ");
        printf("Dia: ");
        scanf("%d", &turma[i].nascimento.dia);

        printf("Mes: ");
        scanf("%d", &turma[i].nascimento.mes);

        printf("Ano: ");
        scanf("%d", &turma[i].nascimento.ano);

        for(j = 0; j < 3; j++) {
            printf("Nota %d", j + 1);
            scanf("%lf", &turma[i].notas[j]);
        }

    }
    
    // Apresentacao dos dados:
    for (i = 0; i < n; i++) {
        // Para cada pessoa    
        printf("Pessoa: %d\n", i + 1);
        printf("- Nome: %s\n", turma[i].nome);
        printf("- Curso: %s\n", turma[i].curso);
        printf("- Idade: %d\n", turma[i].idade);
        printf("- Data de nascimento: %d/%d/%d\n", turma[i].nascimento.dia, turma[i].nascimento.mes, turma[i].nascimento.ano);

        printf("= Notas:\n");
        // coeficiente = 0.0;
        for(j = 0; j < 3; j++) {
            printf("\tNota %d: %lf\n", j + 1, turma[i].notas[j]);
            // coeficiente = coeficiente +
                // (j + 2) * turma[i].notas[j];
        }
        coeficiente = 2 * turma[i].notas[0] +
                      3 * turma[i].notas[1] +  
                      4 * turma[i].notas[2];

        coeficiente = coeficiente / (2 + 3 + 4);

        printf("= Coeficiente: %lf\n\n", coeficiente);
    }

    return 0;
}