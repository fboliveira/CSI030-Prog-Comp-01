#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n, m;

    n = 3;
    m = 3;

    int matriz[n][m];
    int i, j;
    int soma = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("Digite o valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }    

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            soma += matriz[i][j];
        }
    }    

    printf("Soma = %d\n", soma);

    return 0;
}