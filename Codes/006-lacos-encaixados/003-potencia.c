#include <stdio.h>

int potencia(int base, int expoente) {

  int p = 1;
  int i;

  for(i = 1; i <= expoente; i++) {
    p *= base; // p = p * base;
  }

  return p;

}

int main(int argc, char const *argv[]) {

  int b, e;

  for( b = 2; b <= 8; b += 2 ) {
    printf("Potencias de %d:\n", b);
    for( e = 0; e <= 10; e++ ) {
      printf("%d^%d = %d\n", b, e, potencia(b, e));
    }
    printf("\n");
  }

  return 0;
}
