#include <stdio.h>


int main(int argc, char const *argv[]) {

  int matriz[5][5];
  int i, j, valor = 1;
  int soma = 0, diagonal = 0;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      matriz[i][j] = valor++;
    }
  }

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
        printf("[%d][%d] = %d\t", i, j, matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nMATRIZ TRANSPOSTA:\n");

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
        printf("[%d][%d] = %d\t", i, j, matriz[j][i]);
    }
    printf("\n");
  }

  printf("\nSOMA:\n");

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      soma += matriz[i][j];
    }
  }

  for(i = 0; i < 5; i++) {
      diagonal += matriz[i][i];
  }

  printf("Soma = %d\n", soma);
  printf("Diagonal principal = %d\n",diagonal );

  return 0;

}
