#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][5];
  int i, j;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nResultado:\n");

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      // Nao nulas
      if ( matriz[i][j] != 0 ) {
        printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
      }
    }
  }








  return 0;
}
