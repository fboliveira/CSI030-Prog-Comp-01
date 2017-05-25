#include <stdio.h>

int main() {

  // Declaracao das variaveis
  int x, y, z;

  // Ler o numero
  printf("Informe um numero\n");
  scanf("%d", &x);

  // Imprimir o numero digitado
  printf("O valor e %d\n", x);

  // Incrementar o numero
  x++; // x = x + 1

  // Imprimir o numero apos o incremento
  printf("O valor e %d\n", x);

  // Decrementar o numero
  x--; // x = x - 1;

  // Imprimir o numero apos o decremento
  printf("O valor e %d\n", x);

  y = x++;
  printf("X = %d\n", x);
  printf("Y = %d\n", y);

  z = ++x;
  printf("X = %d\n", x);
  printf("Z = %d\n", z);




  return 0;
}
