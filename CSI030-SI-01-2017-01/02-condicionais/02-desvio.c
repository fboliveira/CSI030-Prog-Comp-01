#include <stdio.h>

int main() {

  int x, y, resultado;

  scanf("%d", &x);
  scanf("%d", &y);

  if ( x > y ) {
    resultado = x + y;
  }
  else {
    resultado = x * y;
  }

  printf("O resultado e %d\n", resultado);

  return 0;
}
