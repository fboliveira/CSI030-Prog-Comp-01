#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, *pi = NULL;
  float y, *pf = NULL;

  pi = &x;
  *pi = 5;
  printf("Valor inicial de X = %d\n", *pi);

  *pi = 3 * (*pi);

  pf = &y;
  y = 3.5;
  printf("Valor inicial de Y = %.2f\n", *pf);

  *pf = 3 * (*pf);

  printf("Valor X = %d\n", *pi);
  printf("Valor Y = %.2f\n", *pf);

  pi = NULL;
  pf = NULL;





  return 0;
}
