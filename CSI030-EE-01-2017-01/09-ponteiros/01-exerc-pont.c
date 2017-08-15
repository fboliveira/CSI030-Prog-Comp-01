#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x = 5;
  float y = 7.5;

  int *pi;
  float *pf;

  pi = &x;
  pf = &y;

  *pi = 3 * (*pi);
  *pf = 3 * (*pf);


  printf("X = %d\tY = %.2f\n", *pi, *pf);






  return 0;
}
