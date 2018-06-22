#include <stdio.h>

int maior(int matriz[4][4]) {

  int ma, i, j;
  ma = matriz[0][0];

  for(i = 0; i < 4; i++) {
    for( j = 0; j < 4; j++) {
        if ( matriz[i][j] > ma ) {
          ma = matriz[i][j];
        }
    }
  }

  return ma;

}


int menor(int matriz[4][4]) {

  int me, i, j;
  me = matriz[0][0];

  for(i = 0; i < 4; i++) {
    for( j = 0; j < 4; j++) {
        if ( matriz[i][j] < me ) {
          me = matriz[i][j];
        }
    }
  }

  return me;


}

int main(int argc, char const *argv[]) {

  int matriz[4][4];
  int i, j;
  int ma, me;

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      printf("Digite a posicao [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  ma = maior(matriz);
  me = menor(matriz);

  printf("Maior valor = %d\n", ma);
  printf("Menor valor = %d\n", me);











  return 0;
}
