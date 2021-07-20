#include <stdio.h>

void calcularVetor(int vetor[]) {

}

void calcularMatriz(int n, int provas, int matriz[][5]) {

}

int main(int argc, char const *argv[])
{
    int i, j, quantidadeDeDisciplinas;

    int n;
    int notas;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);

    printf("Digite a quantidade de notas: ");
    scanf("%d", &notas);

    float provas[n][notas];
    char nomes[n][101];

    char turma[101];
    scanf("%s", turma);

    float prova1[n];
    float prova2[n];
    float prova3[n];

    int vetor [] = { 4, 3, 6, 7, 1 };

    float matrizNotas[2][3] = { 
        { 6.9, 7.5, 8.2 },
        { 5.8, 6.5, 9.3 }
    };

    int matriz[10][30];

    // Leitura dos dados
    for(i = 0; i < n; i++) {

        scanf("%s", nomes[i]);

        for(j = 0; j < notas; j++) {
            printf("Digite a Nota %d", j + 1);
            scanf("%d", &provas[i][j]);
        }
    }

    // Impressao
    for(i = 0; i < n; i++) {
        printf("Estudante: %s\n", nomes[i]);

        for(j = 0; j < notas; j++) {
            printf("Nota %d = %.2f\t", j + 1, provas[i][j]);
        }

        printf("\n");
    }

    return 0;
}
