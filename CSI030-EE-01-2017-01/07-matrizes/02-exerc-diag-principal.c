#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, j, m[5][5];

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      m[i][j] = i+j;
    }
  }


  // Diagonal principal - Modo 1
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (i == j) {
        printf("M[%d][%d] = %d\n", i, j, m[i][j]);
      }
    }
  }

  // Diagonal principal - Modo 2
  for(i = 0; i < 5; i++) {
      printf("M[%d][%d] = %d\n", i, i, m[i][i]);
  }

  // Diagonal secundaria - Modo 1
  j = 5 - 1;
  for(i = 0; i < 5; i++) {
    printf("M[%d][%d] = %d\n", i, j, m[i][j]);
    j--;
  }

  // Diagonal secundaria - Modo 2
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (i + j + 1 == 5) {
        printf("M[%d][%d] = %d\n", i, j, m[i][j]);
      }
    }
  }





  return 0;
}
