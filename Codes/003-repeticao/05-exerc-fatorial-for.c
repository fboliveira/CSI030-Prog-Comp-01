#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, fatorial = 1, n = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for( i = 2; i <= n; i++ ) {
    fatorial = fatorial * i;
  }

  printf("O fatorial de %d e %d\n", n, fatorial);

  return 0;
}
