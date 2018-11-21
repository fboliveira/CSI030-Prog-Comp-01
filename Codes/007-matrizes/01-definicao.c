#include <stdio.h>

int main(int argc, char const *argv[]) {

  int m[2][3];
  int i, j;


  // Geracao
  for(i = 0; i < 2; i++) {
    for(j = 0; j < 3; j++){
        m[i][j] = 2 * i + 3 * j + 5;
    }
  }

  // Impressao / processamento
  for(i = 0; i < 2; i ++) {
    for(j = 0; j < 3; j++) {
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }



  return 0;
}
