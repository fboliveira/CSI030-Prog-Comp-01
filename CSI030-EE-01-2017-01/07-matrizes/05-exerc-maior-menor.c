#include <stdio.h>

int menor(int matriz[4][4]) {
  int m, i, j;

  m = matriz[0][0];

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if (matriz[i][j] < m) {
        m = matriz[i][j];
      }
    }
  }
  return m;
}

int maior(int matriz[4][4]) {
  int m, i, j;

  m = matriz[0][0];

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if (matriz[i][j] > m) {
        m = matriz[i][j];
      }
    }
  }
  return m;
}

int main(int argc, char const *argv[]) {

  int i, j, m[4][4];
  int a, b;

  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  a = menor(m);
  b = maior(m);

  printf("Menor = %d\n", a);
  printf("Maior = %d\n", b);








  return 0;
}
