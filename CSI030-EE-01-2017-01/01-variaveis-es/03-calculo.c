#include <stdio.h>

int main() {

  int x = 0, y, s, sub, m;
  float d, media;

  // Entrada
  printf("Digitar um numero\n");
  scanf("%d", &x);

  printf("Digitar outro numero\n");
  scanf("%d", &y);

  // Processamento
  s = x + y;
  sub = x - y;
  m = x * y;
  d = (float)x / y;
  media = s / 2.0;

  // Saida - resultado
  printf("A soma e %d\n", s);
  printf("A subtracao e %d\n", sub);
  printf("A multiplicacao e %d\n", m);
  printf("A divisao e %f\n", d);
  printf("A media e %f\n", media);







  return 0;
}
