#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, maior, menor, i, n;

  i = 1;

  printf("Informe a quantidade: ");
  scanf("%d", &n);

  if ( n <= 0 ) {
    printf("Quantidade invalida!\n");
    return 0;
  }
  
  while ( i <= n ) {
    // Ler numero
    printf("Informe o numero: " );
    scanf("%d", &x);

    if ( i == 1 ) {
      menor = x;
      maior = x;
    } else {
      if (x < menor) {
        menor = x;
      } else if ( x > maior ) {
        maior = x;
      }
    }

    i++;

  }

  printf("Menor = %d\n", menor);
  printf("Maior = %d\n", maior);




  return 0;
}
