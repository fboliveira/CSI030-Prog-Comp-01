#include <stdio.h>

int main(int argc, char const *argv[]) {

    int m, n;
    int i, j;
    int soma = 0;

    printf("Digite a dimensao da matriz: ");
    scanf("%d", &m);

    n = m;

    int matriz[m][n];
    
    printf("Digite os valores da matriz:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz: \n");
    for(i = 0; i < m; i++) {
        printf("[\t");
        for(j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("]\n");
    }

    for(i = 0; i < m; i++) {
        soma += matriz[i][i];
    }

    printf("Soma da diagonal principal = %d\n", soma);

    return 0;
}