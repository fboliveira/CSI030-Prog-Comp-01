#include <stdio.h>

int potencia(int base, int expo) {

  int i, p;

  p = 1;

  for(i = 1; i <= expo; i++) {
    p = p * base;
  }

  return p;





}

int main(int argc, char const *argv[]) {

  int b, e, p;

  printf("Informe a base \n");
  scanf("%d", &b);
  printf("Informe o expoente\n");
  scanf("%d\n", &e);

  p = potencia(b, e);

  printf("Potencia = %d\n", p);







  return 0;
}
