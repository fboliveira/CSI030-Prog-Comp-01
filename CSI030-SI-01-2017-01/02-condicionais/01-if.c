#include <stdio.h>

int main() {

  // Declarar variavel
  int x;

  // Ler a variavel
  printf("Informe um numero\n");
  scanf("%d", &x);

  // SE o numero for maior que 10
  if ( x > 10 ) {
    // Apresentar uma mensagem
      printf("O valor e maior que 10\n");
      printf("Digite outro numero\n");
      x++;
    } else {
      // Apresentar mensagem
      printf("X e menor que 10\n");
      // Decrementar X
      x--;
    }

  printf("O valor atual de X e %d\n", x);

  // Fim do programa
  printf("Fim do programa!\n");




  return 0;
}
