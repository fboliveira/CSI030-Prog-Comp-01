#include <stdio.h>

int main(int argc, char const *argv[]) {


  int dias;
  int anos;
  int meses;
  int aux;


  printf("Informe a quantidade de dias: ");
  scanf("%d", &dias);

  anos = dias / 365;
  aux = dias % 365;

  meses = aux / 30;
  aux = aux % 30;

  printf("%d dias correspondem a %d anos, %d meses e %d dias\n", dias, anos, meses, aux);


  return 0;
}
