#include <stdio.h>

int main(int argc, char const *argv[]) {

  int m = 4, n = 3;
  float matriz[m][n];
  int i, j;

  // Leitura
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
      scanf("%f", &matriz[i][j]);
    }
  }

  // Processamento
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
      matriz[i][j] = 3.5 * matriz[i][j];
    }
  }

  // Impressao
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
        printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;

}
