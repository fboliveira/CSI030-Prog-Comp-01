#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, *pi = NULL;
  float y, *pf = NULL;

  x = 5;
  pi = &x;

  printf("Valor inicial de X = %d\n", *pi);

  *pi = 3 * (*pi);

  printf("X modificado = %d\n", *pi);

  pf = &y;
  *pf = 3.5;

  printf("Valor inicial de Y = %.2f\n", *pf);

  *pf = 1.5 * (*pf);

  printf("Y modificado = %.2f\n", *pf);




  return 0;
}
