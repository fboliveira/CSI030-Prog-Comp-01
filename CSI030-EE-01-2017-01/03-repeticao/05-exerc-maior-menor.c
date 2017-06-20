#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i, x, maior, menor;

  menor = 9999999;
  maior = -9999999;

  printf("Informe a quantidade: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++){

    printf("Digite um numero: ");
    scanf("%d", &x);

    if ( x > maior ) {
      maior = x;
    }

    if ( x < menor ) {
      menor = x;
    }

  }

  printf("Maior = %d\n", maior);
  printf("Menor = %d\n", menor);

  return 0;
}
