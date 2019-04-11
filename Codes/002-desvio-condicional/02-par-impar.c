#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n;
  printf("Informe um numero: ");
  scanf("%d", &n);

  if ( n % 2 == 0 ) {
    printf("O numero e PAR !\n");
  } else {
    printf("O numero e IMPAR !\n");
  }

  return 0;
}
