#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, j, m[3][3];
  int soma = 0;

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      soma = soma + m[i][j];
    }
  }

  printf("Soma = %d\n", soma);



  return 0;
}
