#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][5];
  int i, j;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      matriz[i][j] = i;
    }
  }

  // Para cada uma das linhas
  printf("Matriz original: \n");
  for(i = 0; i < 5; i++) {
      // Para cada uma das colunas
      for(j = 0; j < 5; j++) {
        printf("%d\t", matriz[i][j]);
      }
      printf("\n");
  }

  // Para cada uma das linhas
  printf("Matriz transposta: \n");
  for(i = 0; i < 5; i++) {
      // Para cada uma das colunas
      for(j = 0; j < 5; j++) {
        printf("%d\t", matriz[j][i]);
      }
      printf("\n");
  }

  return 0;
}
