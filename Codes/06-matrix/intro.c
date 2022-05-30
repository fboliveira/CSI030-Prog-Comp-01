#include <stdio.h>

#define LINHA 9
#define COLUNA 5

void recebe_vetor(int vetor[], int quantidade) {

}

void receba_matriz(int **matriz, int linhas, int colunas) {

}

int main(int argc, char const *argv[]) {

    int linhas, colunas;
    int i, j;

    printf("Numero de pessoas: ");
    scanf("%d", &linhas);

    printf("Numero de notas por pessoa: ");
    scanf("%d", &colunas);

    float notas[linhas][colunas];
    float soma, media;
    int aprovados = 0;
    
    // char nome[101];
    // scanf("%s", nome);
    
    // Nomes
    char nomes[linhas][101];

    for(i = 0; i < linhas; i++) {
        printf("Nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Contar letra A
    // for(i = 0; i < linhas; i++) {
    //     for(j = 0; nomes[i][j] != '\0' ; j++) {

    //     }

    for(i = 0; i < linhas; i++) {
        printf("Digite as notas da pessoa %d - %s\n", i + 1, nomes[i]);
        for(j = 0; j < colunas; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for(i = 0; i < linhas; i++) {
        printf("Notas da pessoa %d - %s: \n", i + 1, nomes[i]);
        soma = 0;
        for(j = 0; j < colunas; j++) {
            printf("Nota %d: %.2f\n", j + 1, notas[i][j]);
            soma = soma + notas[i][j];
        }
        // Media das notas por pessoa e o resultado
        media = soma / colunas;
        printf("Media da pessoa: %.2f\n", media);
        printf("Resultado: ");

        if (media >= 6.0) {
            printf("Aprovado\n");
            aprovados++;
        } else {
            printf("Reprovado\n");
        }
    }

    // Media das notas da turma - por nota e geral
    // Acessar a matriz por coluna e linha
    for(j = 0; j < colunas; j++) {
        soma = 0;
        for(i = 0; i < linhas; i++) {
            soma = soma + notas[i][j];
        }
        media = soma / linhas;
        printf("Media da Nota %d = %.2f\n", j + 1, media);
    }

    // Contar - aprovados e reprovados (%)
    printf("Pessoas aprovadas = %d\n", aprovados);
    printf("Pessoas reprovadas = %d\n", linhas - aprovados);

    return 0;
}