#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][5];
  int i, j, p = 1;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      matriz[i][j] = p++;
    }
  }

  for(i = 0; i < 5; i++) {
      printf("[%d][%d] = %d\n", i, i, matriz[i][i]);
  }




  return 0;
}
