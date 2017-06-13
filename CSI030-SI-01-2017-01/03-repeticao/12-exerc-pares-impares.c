#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, pares = 0, impares = 0;
  float somaPares = 0, soma = 0, mediaPares, media;

  do {

      printf("Informe um numero\n");
      scanf("%d", &x);

      if ( x > 0 ) {
        if ( x % 2 == 0 ) { // Par
            somaPares = somaPares + x;
            pares++;
        } else {
          impares++;
        }

        soma = soma + x;

      } else if ( x < 0 ) {
        printf("Informe apenas numeros positivos!\n");
      }

  } while ( x != 0 );

  printf("A quantidade de pares = %d\n", pares);

  if ( pares > 0 ) {
    mediaPares = somaPares / pares;
    printf("A media dos pares = %.2f\n", mediaPares);
  }

  printf("A quantidade de impares = %d\n", impares);

  if ( pares + impares > 0 ) {
    media = soma / ( pares + impares );
    printf("A media geral = %.2f\n", media);
  }


  return 0;
}
