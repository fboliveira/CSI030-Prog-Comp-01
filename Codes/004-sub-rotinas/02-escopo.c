#include <stdio.h>

int x = 3;

// Assinatura
void imprimir(int x);

int main(int argc, char const *argv[]) {

  int x = 5;
  printf("X = %d\n", x);
  imprimir(x);

  return 0;
}

// Implementacao
void imprimir(int x) {
  x = x + 3;
  printf("Sub-rotina: %d\n", x);
}
