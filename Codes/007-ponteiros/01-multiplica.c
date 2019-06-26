#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x = 10;
  float y = 2.5;

  int *pi = NULL;
  float *pf = NULL;

  pi = &x;
  pf = &y;

  printf("ANTES: X = %d\tY = %.2f\n", *pi, *pf);

  *pi = *pi * 3;
  *pf = *pf * 3;

  printf("DEPOIS: X = %d\tY = %.2f\n", *pi, *pf);


  return 0;
}
