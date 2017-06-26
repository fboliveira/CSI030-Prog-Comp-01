#include <stdio.h>
#include <math.h>

// Assinaturas
int delta(int a, int b, int c);
int x1(int a, int b, int d);
int x2(int a, int b, int d)

int main(int argc, char const *argv[]) {

  int a, b, c, d, r1, r2;

  printf("Informe os parametros A, B e C\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  d = delta(a, b, c);

  if (d < 0) {
    printf("Nao existem raizes reais!\n");
  } else {
    r1 = x1(a, b, d);
    r2 = x2(a, b, d);
    printf("X1 = %d\n", r1);
    printf("X2 = %d\n", r2);
  }







  return 0;
}

// Funcao para calcular o DELTA
int delta(int a, int b, int c) {
  int d;
  d = (b * b) - 4 * a * c;
  return d;
}

// Funcao para calcular X1 (+)
int x1(int a, int b, int d) {
  int r = (-b + sqrt(d)) / ( 2 * a );
  return r;
}

// Funcao para calcular X2 (-)
int x2(int a, int b, int d) {
  int r = (-b - sqrt(d)) / ( 2 * a );
  return r;
}
