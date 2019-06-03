#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[4][4];
  int i, j;


  printf("Digite os valores:" );

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      printf("[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Resultado: \n");

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      printf("[%d][%d] = %d\t", i, j, matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
