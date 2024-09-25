#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int linhas, colunas;

    printf("Digite as linhas: ");
    scanf("%d", &linhas);

    printf("Digite as colunas: ");
    scanf("%d", &colunas);

    // Alocar a estrutura - linhas
    int **matriz = (  int **  ) malloc( linhas * sizeof(int *) );

    // Colunas
    for(int i = 0; i < linhas; i++) {
        matriz[i] = ( int * )malloc(colunas * sizeof(int));

    }

    printf("Digite os valores: \n");
    for(int i = 0; i < linhas; i++) {
       for(int j = 0; j < colunas; j++) {
        scanf("%d", &matriz[i][j]);
       }
    }

    printf("Valores registrados: \n");
    for(int i = 0; i < linhas; i++) {
       for(int j = 0; j < colunas; j++) {
          printf("%d\t", matriz[i][j]);
       }
       printf("\n");
    }

    // Liberar a memoria

    // Colunas
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    
    // Estrutura da matriz - linhas
    free(matriz);

    return 0;
}