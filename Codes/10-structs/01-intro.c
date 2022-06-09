#include <stdio.h>

typedef int inteiro;

typedef struct P
{

    char nome[101];
    float altura;
    int idade;

    float notas[3];

} Pessoa;

void lerDados(Pessoa turma[], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        gets(turma[i].nome);
        scanf("%f", &turma[i].altura);
        scanf("%d", &turma[i].idade);

        for (j = 0; j < 3; j++)
        {
            scanf("%f", turma[i].notas[j]);
        }
    }
}

int main(int argc, char const *argv[])
{

    int i, j;
    int n = 40;
    inteiro y;

    Pessoa fernando;
    Pessoa turma[n];

    lerDados(turma, n);

    Pessoa *turma2 = (Pessoa *)malloc(n * sizeof(Pessoa));

    lerDados(turma2, n);

    return 0;
}