#include <stdio.h>

int soma(int a, int b) {
  int c = a + b;
  a = a * 10;
  return c;
}

int multiplica(int a, int b) {
  int c = a * b;
  return c;
}

float divide(int a, int b) {
  float c = (float)a / b;
  return c;
}

void imprimirInt(int w) {
  printf("O resultado e %d\n", w);
}

void imprimirFloat(float w) {
  printf("O resultado e %f\n", w);
}

int main(int argc, char const *argv[]) {

  int x, y, s, m;
  float d;

  printf("Informe o valores\n");
  scanf("%d", &x);
  scanf("%d", &y);

  s = soma(x , y);
  m = multiplica(x, y);
  d = divide(x, y);

  imprimirInt(s);
  imprimirInt(m);
  imprimirFloat(d);

  return 0;
}
