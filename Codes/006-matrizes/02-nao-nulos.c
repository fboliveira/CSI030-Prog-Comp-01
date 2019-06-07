#include <stdio.h>


int main(int argc, char const *argv[]) {


  int matriz[5][5];
  int i, j;

  printf("Digite os valores:\n");

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("Posicao [%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Posicoes/valores diferentes de zero: \n");

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if ( matriz[i][j] != 0 ) {
        printf("Posicao [%d][%d] = %d\n", i, j, matriz[i][j]);
      }
    }
  }



  return 0;
}
