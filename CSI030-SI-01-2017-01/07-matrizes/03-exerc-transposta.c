#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][5];
  int i, j, p = 1;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      matriz[i][j] = p++;
    }
  }

  printf("Matriz original\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Matriz TRANSPOSTA\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("%d\t", matriz[j][i]);
    }
    printf("\n");
  }




  return 0;
}
