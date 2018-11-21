#include <stdio.h>

void imprimirNaoNulo(int m[5][5]) {
  int i, j;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if ( m[i][j] != 0 ) {
        printf("%d\t", m[i][j]);
      } else {
        printf("-\t");
      }
    }
    printf("\n");
  }

}

int main(int argc, char const *argv[]) {

  int m[5][5];
  int i, j;


  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("Digite a posicao [%d][%d]: ", i, j);
      scanf("%d", &m[i][j]);
    }
  }

  imprimirNaoNulo(m);

  return 0;
}
