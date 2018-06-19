#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][5];
  int i, j, k;
  float soma = 0.0;

  k = 1;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      matriz[i][j] = k++;
    }
  }

  // Para cada uma das linhas
  for(i = 0; i < 5; i++) {
      // Para cada uma das colunas
      for(j = 0; j < 5; j++) {
        printf("%d\t", matriz[i][j]);
      }
      printf("\n");
  }

  printf("Diagonal principal - Modo 1 - i, j\n");
  // Diagonal principal - Modo 1 - i, j
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (i == j) {
        printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
      }
    }
  }

  printf("Diagonal principal - Modo 2 - somente i\n");
  // Diagonal principal - Modo 2 - somente i
  for(i = 0; i < 5; i++) {
      printf("[%d][%d] = %d\n", i, i, matriz[i][i]);
      soma = soma + matriz[i][i];
  }

  soma = soma / 5.0;
  printf("A media da diagonal principal e %.2f\n", soma);

  soma = 0.0;
  printf("Diagonal secundaria\n");
  j = 5 - 1; // n - 1
  for(i = 0; i < 5; i++) {
    printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
    soma = soma + matriz[i][j];
    j--;
  }

  soma = soma / 5.0;
  printf("A media da diagonal secundaria e %.2f\n", soma);






  return 0;
}
