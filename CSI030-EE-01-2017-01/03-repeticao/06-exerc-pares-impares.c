#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, n = 0, pares = 0, impares = 0, somaPares = 0, soma = 0;

  float mediaPares, media;

  do {
    printf("Informe um numero: ");
    scanf("%d", &x);

    if ( x > 0 ) {

      // Par
      if ( x % 2 == 0 ) {
        pares++;
        somaPares = somaPares + x;
      } else {
        impares++;
      }

      soma = soma + x;
      n++;

    } else if ( x < 0 ) {
      printf("Informe apenas numeros positivos!\n");
    }


  } while ( x != 0 );

  printf("Pares = %d\n", pares);
  printf("Impares = %d\n", impares);

  if ( pares > 0 ) {
    mediaPares = (float)somaPares / pares;
    printf("Media dos pares = %.2f\n", mediaPares);
  }

  if ( n > 0 ) {
    media = (float)soma / n;
    printf("Media geral = %.2f\n", media);
  }





  return 0;
}
