#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][7], valor = 0;
  int i, j;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 7; j++) {
      scanf("%d" , &matriz[i][j]);
    }
  }

  for(i = 0; i < 5; i++) {
    printf("[");
    for(j = 0; j < 7; j++) {
      printf("\t%d ", matriz[i][j]);
    }
    printf("\t]\n");
  }

  return 0;
}
