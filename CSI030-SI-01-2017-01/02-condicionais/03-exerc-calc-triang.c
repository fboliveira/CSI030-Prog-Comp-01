#include <stdio.h>
#include <math.h>

int main() {

  // Definir as variaveis
  int a, b, c, d;
  float A, p;

  // Ler os 4 lados
  printf("Informe os 4 tamanhos para os lados\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  // Calcular P e A para cada uma das combinacoes
  // ABC
  p = (a + b + c) / 2.0;
  A = sqrt( p * (p - a) * (p - b) * (p - c) );
  if ( A > 0 ) {
    printf("ABC formam um triangulo.\n");
  } else {
    printf("ABC nao formam um triangulo.\n");
  }
  // ABD
  p = (a + b + d) / 2.0;
  A = sqrt( p * (p - a) * (p - b) * (p - d) );
  if ( A > 0 ) {
    printf("ABD formam um triangulo.\n");
  } else {
    printf("ABD nao formam um triangulo.\n");
  }

  // ACD
  p = (a + c + d) / 2.0;
  A = sqrt( p * (p - a) * (p - c) * (p - d) );
  if ( A > 0 ) {
    printf("ACD formam um triangulo.\n");
  } else {
    printf("ACD nao formam um triangulo.\n");
  }
  // BCD
  p = (b + c + d) / 2.0;
  A = sqrt( p * (p - b) * (p - c) * (p - d) );
  if ( A > 0 ) {
    printf("BCD formam um triangulo.\n");
  } else {
    printf("BCD nao formam um triangulo.\n");
  }

  return 0;
}
