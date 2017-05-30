#include <stdio.h>

int main() {

  // Declarar variavel
  int x;

  // Ler a variavel
  printf("Informe um numero\n");
  scanf("%d", &x);

  //Se variavel é maior que 10
  if (x > 10) {
    // Mensagem
    printf("O numero e maior que 10!\n");
    // Incrementar
    x++;
  } else { // Senão
    printf("O valor é menor ou igual a 10\n");
    x--;
  }

  // Imprimir o valor atual da variavel
  printf("O valor de X e %d\n", x);

  // Fim do programa
  printf("Fim do programa!\n");


  return 0;
}
