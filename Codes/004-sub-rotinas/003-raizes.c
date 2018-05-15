#include <stdio.h>
#include <math.h>

float delta(int a, int b, int c) {
  return pow(b, 2) - 4 * a * c;
}

// +
float calcularX1(int a, int b, float d) {
  float x = (-b + sqrt(d)) / (2.0 * a);
  return x;
}

// -
float calcularX2(int a, int b, float d) {
  float x = (-b - sqrt(d)) / (2.0 * a);
  return x;
}

int main(int argc, char const *argv[]) {

  int a, b, c;
  float d, x1, x2;

  printf("Informe os valores de a, b, c:\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  d = delta(a, b, c);

  if ( d > 0 ) {
    printf("A equacao tem duas raizes reais:");
    x1 = calcularX1(a, b, d);
    x2 = calcularX2(a, b, d);
    printf("X1 = %f\nX2 = %f\n", x1, x2);
  } else if ( d == 0 ) {
    printf("A equacao tem um raiz real:");
    x1 = calcularX1(a, b, d);
    printf("X1 == X2 = %f\n", x1);
  } else {
    printf("A equacao nao tem raizes reais!\n");
  }










  return 0;
}
