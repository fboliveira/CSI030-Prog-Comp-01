#include <stdio.h>

void ler_matriz(int matriz[][3], int linhas, int colunas) {
    int i, j;

    printf("Informe os valores da matriz: \n");
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

}

void imprimir_matriz(int matriz[][3], int linhas, int colunas) {

    int i, j;

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }    

}

int main(int argc, char const *argv[]) {

    int linhas = 2;
    int colunas = 3;

    int i, j, escalar;

    int matriz[linhas][colunas];

    ler_matriz(matriz, linhas, colunas);

    printf("Matriz resultante: \n");
    imprimir_matriz(matriz, linhas, colunas);

    printf("Digite um valor: ");
    scanf("%d", &escalar);

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("Matriz apos multiplicacao pelo escalar: \n");
    imprimir_matriz(matriz, linhas, colunas);

    return 0;
}