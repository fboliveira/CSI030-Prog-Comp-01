#include <stdio.h>
#include <math.h>

int main() {

  float y, x, xant;
  int i;

  printf("Informe um numero: ");
  scanf("%f", &y);

  // X1
  x = y / 2.0;

  // X2..Xn <- 25
  for(i = 2; i <= 25; i++) {

    xant = x;
    x = (powf( xant, 2 ) + y) / ( 2 * xant );

  }

  printf("Raiz quadrada aproximada: %.2f\n", x);






  return 0;
}
