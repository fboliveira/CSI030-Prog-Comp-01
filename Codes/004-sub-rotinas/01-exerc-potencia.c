
#include <stdio.h>


int potencia(int base, int expoente) {

  int p = 1;
  int i;

  for ( i = 1; i <= expoente; i++ ) {
    p = p * base;
  }

  return p;

}

int main(int argc, char const *argv[]) {

  int b, e, p;
  printf("Informe a base: ");
  scanf("%d", &b);
  printf("Informe o expoente: ");
  scanf("%d", &e);

  p = potencia(b, e);

  printf("A potencia e: %d\n", p);



  return 0;
}
