#include <stdio.h>

int soma(int n) {
  // Base
  if ( n == 1 ) {
    return 1;
  } else {
    return n + soma(n - 1);
  }
}

int main(int argc, char const *argv[]) {

  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("SOMA = %d\n", soma(n));

  return 0;
}
