#include <stdio.h>

int potencia(int base, int exp) {
  int res = 1;
  int count;

  for(count = 1; count <= exp; count++) {
    //res = res * base;
    res *= base;
  }

  return res;
}

int main(int argc, char const *argv[]) {


  int base, p, res;

  printf("Insira a base: ");
  scanf("%d", &base);

  printf("Insira a potencia: ");
  scanf("%d", &p);

  res = potencia(base, p);

  printf("O resultado de %d elevado a %d e %d\n", base, p, res);


  return 0;
}
