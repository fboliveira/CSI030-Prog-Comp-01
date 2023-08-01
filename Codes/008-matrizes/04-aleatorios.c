#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max) {
    return rand() % (max + 1 - min) + min;
}

int main(int argc, char const *argv[]) {
    
    int M = 3;
    int N = 2;

    int matriz[M][N];
    int i, j;
    int escalar;

    srand(time(NULL));

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = aleatorio(1, 100);
        }
    }

    printf("\nMatriz: \n");
    for (i = 0; i < M; i++) {
        printf("[\t");
        for (j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("]\n");
    }

    printf("Digite um numero: ");
    scanf("%d", &escalar);

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("\nMatriz apos multiplicacao: \n");
    for (i = 0; i < M; i++) {
        printf("[\t");
        for (j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("]\n");
    }

    return 0;
}