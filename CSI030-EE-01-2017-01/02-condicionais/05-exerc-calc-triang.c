#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int a, b, c, d;
  float p, area;

  // Ler as 4 medidas
  printf("Informe as 4 medidas dos lados\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  // Calcular P e A para as combinacoes

  // 01 - ABC
  p = ( a + b + c ) / 2.0;
  area = sqrt( p * (p - a) * (p - b) * (p - c));

  if ( area > 0 ) {
    printf("ABC formam um triangulo\n");
  } else {
    printf("ABC nao formam um triangulo\n");
  }

  // 02 - ABD
  p = ( a + b + d ) / 2.0;
  area = sqrt( p * (p - a) * (p - b) * (p - d));

  if ( area > 0 ) {
    printf("ABD formam um triangulo\n");
  } else {
    printf("ABD nao formam um triangulo\n");
  }

  // 03 - ACD
  p = ( a + c + d ) / 2.0;
  area = sqrt( p * (p - a) * (p - c) * (p - d));

  if ( area > 0 ) {
    printf("ACD formam um triangulo\n");
  } else {
    printf("ACD nao formam um triangulo\n");
  }

  // 04 - BCD
  p = ( b + c + d ) / 2.0;
  area = sqrt( p * (p - b) * (p - c) * (p - d));

  if ( area > 0 ) {
    printf("BCD formam um triangulo\n");
  } else {
    printf("BCD nao formam um triangulo\n");
  }

  return 0;
}
