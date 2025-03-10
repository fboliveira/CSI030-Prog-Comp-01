#include <stdio.h>

void imprimir(int matriz[5][5]) {
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {

    int matriz[5][5];
    int transposta[5][5];

    int i, j, k = 1;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = k++;
        }
    }

    printf("Matriz original: \n");
    imprimir(matriz);

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta: \n");
    imprimir(transposta);

    return 0;
}