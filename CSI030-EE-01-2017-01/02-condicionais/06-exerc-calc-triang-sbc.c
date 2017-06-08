#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int a, b, c, d;
  float pABC, pABD, pACD, pBCD;
  float aABC, aABD, aACD, aBCD;

  // Ler as 4 medidas
  scanf("%d%d%d%d", &a, &b, &c, &d);

  // Calcular as combinacoes
  // 01 - ABC
  pABC = ( a + b + c ) / 2.0;
  aABC = sqrt( pABC * (pABC - a) * (pABC - b) * (pABC - c));

  // 02 - ABD
  pABD = ( a + b + d ) / 2.0;
  aABD = sqrt( pABD * (pABD - a) * (pABD - b) * (pABD - d));
  // 03 - ACD
  pACD = ( a + c + d ) / 2.0;
  aACD = sqrt( pACD * (pACD - a) * (pACD - c) * (pACD - d));
  // 04 - BCD
  pBCD = ( b + c + d ) / 2.0;
  aBCD = sqrt( pBCD * (pBCD - b) * (pBCD - c) * (pBCD - d));

  // Apresentar o resultado
  if ( aABC > 0 || aABD > 0 || aACD > 0 || aBCD > 0 ) {
    printf("S\n");
  } else {
    printf("N\n");
  }





  return 0;
}
