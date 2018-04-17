#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x;
  int n;

  printf("Informe o valor minimo: ");
  scanf("%d", &x);

  printf("Informe o numero maximo: ");
  scanf("%d", &n);

  while( x <= n ) {
    printf("%d\n", x);
    x++;
  }

  printf("FIM!\n");




  return 0;
}
