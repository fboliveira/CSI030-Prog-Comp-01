#include <stdio.h>

void ler_matriz(int matriz[][3], int linhas, int colunas) {
    int i, j;

    printf("Informe os valores da matriz: \n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int matriz[][3], int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]) {
    int linhas = 2;
    int colunas = 3;

    int i, j, escalar, soma = 0;
    float media;

    int matriz[linhas][colunas];
    int resultante[linhas][colunas];

    ler_matriz(matriz, linhas, colunas);

    printf("Matriz resultante: \n");
    imprimir_matriz(matriz, linhas, colunas);

    printf("Digite um valor: ");
    scanf("%d", &escalar);

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            // matriz[i][j] *= escalar;
            resultante[i][j] = escalar * matriz[i][j];
        }
    }
    printf("Matriz apos multiplicacao pelo escalar: \n");
    imprimir_matriz(resultante, linhas, colunas);

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            soma += resultante[i][j];
        }
    }

    media = (float)soma / (linhas * colunas);

    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {

            if ( resultante[i][j] > media ) {
                printf("[%d][%d] = %d\n", i, j, resultante[i][j]);
            }

        }
    }

    return 0;
}