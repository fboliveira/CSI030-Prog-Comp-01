#include <stdio.h>
#include <stdlib.h>

void imprimir(int **matriz, int linha, int coluna) {

    int i, j;
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

}

int main(int argc, char const *argv[])
{
    int linha = 5, coluna = 5;
    int i, j;

    int **M = (int **) malloc(linha * sizeof(int*));

    for(i = 0; i < linha; i++) {
        M[i] = (int *) malloc(coluna * sizeof(int));
    }

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            M[i][j] = i + j;
        }
    }

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < linha; i++) {
        free(M[i]);
    }

    free(M);

    return 0;
}
