#include <stdio.h>

int main() {

  // Declarar variaveis
  int x, y, resultado;

  // Ler dois numeros
  printf("Informe o primeiro numero\n");
  scanf("%d", &x);
  printf("Informe o segundo numero\n");
  scanf("%d", &y);

  // Se x maior que y
  if ( x > y ) {
    // Somar
    resultado = x + y;
  } else {
  // Senão
    // Multiplicar
    resultado = x * y;
  }

  // Imprimir o resultado
  printf("O resultado e %d\n", resultado);

  return 0;
}
