#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n = 3;
  int matriz[n][n];
  int i, j, soma = 0;

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      soma = soma + matriz[i][j];
    }
  }

  printf("A soma da matriz e %d\n", soma);

  return 0;
}
