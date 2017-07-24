#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][5];
  int i, j;
  int pos = 0;

  printf("Informe os dados:\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Posicoes nao nulas: \n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if( matriz[i][j] != 0 ) {
        printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
        pos++;
      }
    }
  }
  printf("Total = %d\n", pos);







  return 0;
}
