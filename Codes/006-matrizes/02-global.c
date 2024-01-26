#include <stdio.h>

int LINHAS = 3;
int COLUNAS = 4;

void imprimir_matriz(int matriz[][COLUNAS]) {

    int LINHAS = 8;

    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

}

int main(int argc, char const *argv[]) {

    int i, j;
   
    LINHAS = 5;

    int matriz[LINHAS][COLUNAS];

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = i + j;
        }
    }

    imprimir_matriz(matriz);

    return 0;
}