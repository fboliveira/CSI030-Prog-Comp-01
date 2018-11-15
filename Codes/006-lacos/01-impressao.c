#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, j, n, m;
  printf("Digite a quantidade de linhas: ");
  scanf("%d", &n);

  printf("Digite a quantidade de colunas: ");
  scanf("%d", &m);

  for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
      printf("*\t");
    }
    printf("\n");
  }

  return 0;
}
