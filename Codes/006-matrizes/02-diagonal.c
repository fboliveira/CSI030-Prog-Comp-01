#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio() {
    return rand() % 21;
}

int main(int argc, char const *argv[]) {

    srand(time(NULL));

    int linhas = 5, colunas = 5;
    int matriz[linhas][colunas];
    int i, j;
    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;


    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            matriz[i][j] = aleatorio();
        }
    }

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // for(i = 0; i < linhas; i++) {
    //     for(j = 0; j < colunas; j++) {
    //         if ( i == j ) {
    //             soma += matriz[i][j];
    //         }
    //     }
    // }

    printf("Diagonal PRINCIPAL: \n");
    j = 0;
    for(i = 0; i < linhas; i++) {
        soma_diagonal_principal += matriz[i][j];
        j++;
    }

    printf("Soma da diagonal principal = %d\n", soma_diagonal_principal);

    printf("Diagonal SECUNDARIA: \n");
    j = colunas - 1;
    for(i = 0; i < linhas; i++) {
        soma_diagonal_secundaria += matriz[i][j];
        j--;
    }

    printf("Soma da diagonal secundaria = %d\n", soma_diagonal_secundaria);










    return 0;
}