#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x;
  int n;
  int aux;

  printf("Informe o primeiro valor: ");
  scanf("%d", &x);

  printf("Informe o segundo valor: ");
  scanf("%d", &n);

  if (x > n) {
    aux = x;
    x = n;
    n = aux;
  }

  while( x <= n ) {
    printf("%d\n", x);
    x++;
  }

  printf("FIM!\n");




  return 0;
}
