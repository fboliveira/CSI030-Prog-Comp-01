#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, j;
  float m[4][3];

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%f", &m[i][j]);
    }
  }

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      m[i][j] = 3.5 * m[i][j];
    }
  }

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      printf("%f\t", m[i][j]);
    }
    printf("\n");
  }




  return 0;
}
