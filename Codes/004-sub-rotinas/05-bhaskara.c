#include <stdio.h>
#include <math.h>

float delta(int a, int b, int c) {
  float d;
  d = pow(b, 2) - 4 * a * c;
  return d;

}

float calcularX1(int a, int b, int c) {

  float d = delta(a, b, c);
  float x1;

  if (d >= 0 ) {
    x1 = (- b + sqrt(d)) / (2.0 * a);
  }

  return x1;

}

float calcularX2(int a, int b, int c) {

  float d = delta(a, b, c);
  float x2;

  if (d >= 0 ) {
    x2 = (- b - sqrt(d)) / (2.0 * a);
  }

  return x2;

}

int main(int argc, char const *argv[]) {

  int a, b, c;
  float d, x1, x2;

  printf("Digite os valores para a, b e c:\n");
  scanf("%d%d%d", &a, &b, &c);

  d = delta(a, b, c);

  if (d > 0) {
    x1 = calcularX1(a, b, c);
    x2 = calcularX2(a, b, c);

    printf("Existem duas raizes reais!\n");
    printf("X1 = %.2f\n", x1);
    printf("X2 = %.2f\n", x2);

  } else if ( d == 0 ) {
    x1 = calcularX1(a, b, c);
    printf("Existe apenas uma raiz real!\n");
    printf("X1 = X2 = %.2f\n", x1);

  } else {
    printf("Nao existem raizes reais!\n");
  }











  return 0;
}
