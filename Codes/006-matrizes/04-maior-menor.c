#include <stdio.h>

int maior(int matriz[4][4]) {
  int n = matriz[0][0];
  int i, j;

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if ( matriz[i][j] > n ) {
        n = matriz[i][j];
      }
    }
  }

  return n;

}

int menor(int matriz[4][4]) {
  int n = matriz[0][0];
  int i, j;

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if ( matriz[i][j] < n ) {
        n = matriz[i][j];
      }
    }
  }

  return n;

}

int main(int argc, char const *argv[]) {

  int matriz[4][4];
  int i, j;
  int ma, me;

  printf("Digite os valores:\n");
  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++ ) {
      scanf("%d", &matriz[i][j]);
    }
  }

  ma = maior(matriz);
  me = menor(matriz);

  printf("Maior = %d\n", ma);
  printf("Menor = %d\n", me);








  return 0;
}
