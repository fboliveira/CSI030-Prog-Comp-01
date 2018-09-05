#include <stdio.h>

int main(int argc, char const *argv[]) {

  int valor;
  int n100, n50, n20, n10, n05, n02;

  printf("Digite o valor: ");
  scanf("%d", &valor);

  n100 = valor / 100;
  valor = valor % 100;

  n50 = valor / 50;
  valor = valor % 50;

  n20 = valor / 20;
  valor = valor % 20;

  n10 = valor / 10;
  valor = valor % 10;

  n05 = valor / 5;
  valor = valor % 5;

  n02 = valor / 2;
  valor = valor % 2;

  printf("Quantidade de notas: \n");
  printf("R$ 100 = %d\n", n100);
  printf("R$ 50 = %d\n", n50);
  printf("R$ 20 = %d\n", n20);
  printf("R$ 10 = %d\n", n10);
  printf("R$ 5 = %d\n", n05);
  printf("R$ 2 = %d\n", n02);

  // E se sobrar algum valor?

  return 0;
}
