#include <stdio.h>

int main() {

  // Declaracao
  int par, impar, somaPar, somaGeral, x;
  float mediaPar, mediaGeral;
  // Inicializacao
  par = 0;
  impar = 0;
  somaPar = 0;
  somaGeral = 0;
  x = 0;

  mediaPar = 0.0;
  mediaGeral = 0.0;

  // Estrutura de repeticao
  do {

    printf("Digite um numero: ");
    scanf("%d", &x);

    if ( x > 0 ) {
        if ( x % 2 == 0 ) { // Pares
          par++;
          somaPar = somaPar + x;
        } else { // Impares
          impar++;
        }
        somaGeral += x;
    } else if ( x < 0 ) {
      printf("Digite apenas numeros positivos!\n");
    }

  } while ( x != 0 );

  printf("A quantidade de pares e: %d\n", par);
  printf("A quantidade de impares e: %d\n", impar);

  if ( par > 0 ) {
    mediaPar = (float)somaPar / par;
    printf("A media dos pares: %.2f\n", mediaPar);
  }

  if ( (par + impar) > 0 ) {
    mediaGeral = (float)somaGeral / ( par + impar );
    printf("A media geral: %.2f\n", mediaGeral);
  }





  return 0;
}
