#include <stdio.h>

int main(int argc, char const *argv[]) {
    int M = 3;
    int N = 2;
    int menor, maior;
    int i, j;

    int matriz[M][N];

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);

    return 0;
}