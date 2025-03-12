#include <stdio.h>

void imprimir(int matriz[][5], int linhas, int colunas) {
    int i, j;

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {

    int matriz[5][5];
    int i, j, k = 1;
    int soma = 0;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = k;
            k++;
        }
    }

    printf("Matriz original: \n");
    imprimir(matriz, 5, 5);
    
    printf("Diagonal principal: \n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", matriz[i][i]);
    }

    printf("Diagonal secundaria: \n");
    for(i = 0, j = 4; i < 5; i++, j--) {
        printf("%d\n", matriz[i][j]);
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            soma += matriz[i][j];
        }
    }

    printf("Soma da matriz = %d\n", soma);

    int escalar = 5;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("Matriz multiplicada pelo escalar: \n");
    imprimir(matriz, 5, 5);
    return 0;
}