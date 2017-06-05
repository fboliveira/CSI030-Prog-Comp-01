#include <stdio.h>

int main() {

  // Declarar variaveis
  int x, y;

  // Ler os valores
  printf("Informe dois numeros\n");
  scanf("%d", &x);
  scanf("%d", &y);

  // Verificar as condicoes
  // Se X < Y
  if ( x < y ) {
    // Imprimir ascendente x - Y
    printf("X é menor que Y\n");
    while ( x <= y ) {
      printf("%d\n", x);
      x++;
    }
    // Se X > Y
  } else if ( x > y ) {
    // Imprimir descendente X - Y
    printf("X é maior que Y\n");
    while ( x >= y ) {
      printf("%d\n", x);
      x--;
    }
  } else {
  // Se X == Y
    // Mensagem
    printf("X e Y são iguais!\n");
  }
  return 0;
}
