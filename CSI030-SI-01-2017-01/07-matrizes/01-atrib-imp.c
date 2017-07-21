#include <stdio.h>

int main(int argc, char const *argv[]) {

  int m[3][4];
  int i, j;

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 4; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  for(i = 0; i < 3; i++) {
    for(j = 0; j < 4; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }





  return 0;
}
