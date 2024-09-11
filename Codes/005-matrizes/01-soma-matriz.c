#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void imprimir_matriz(int matriz[][3], int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int somar_matriz(int matriz[][3], int linhas, int colunas) {
    int soma = 0;
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main(int argc, char const *argv[]) {
    int linhas = 3;
    int colunas = 3;

    int matriz[linhas][colunas];
    int i, j;
    int soma = 0;

    printf("Digite os valores: ");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimir_matriz(matriz, linhas, colunas);

    soma = somar_matriz(matriz, linhas, colunas);
    printf("Soma = %d\n", soma);

    // 2 * MATRIZ
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] *= 2;
        }
    }

    imprimir_matriz(matriz, linhas, colunas);

    return 0;
}