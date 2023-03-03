#include <stdio.h>

int main(int argc, char const *argv[]) {

    int linhas, colunas, i, j, escalar;

    // linhas = 3;
    // colunas = 4;


    printf("Digite a quantidade de linhas e colunas: \n");
    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("Digite os valores da matriz...\n");

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor: ");
    scanf("%d", &escalar);

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("Matriz resultante: \n");

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}