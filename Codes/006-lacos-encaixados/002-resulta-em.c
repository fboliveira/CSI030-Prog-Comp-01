#include <stdio.h>

void resulta_em(int numero) {

  int x, y, k;

  for( x = -100; x <= 100; x++ ) {
    for( y = -100; y <= 100; y++ ) {
        k = x * y;
        if ( k == numero ) {
          printf("%d * %d = %d\n", x, y, k);
        }
    }
  }

}

int main(int argc, char const *argv[]) {

  int numero;
  printf("Informe um numero: ");
  scanf("%d", &numero);

  resulta_em(numero);

  return 0;
}
