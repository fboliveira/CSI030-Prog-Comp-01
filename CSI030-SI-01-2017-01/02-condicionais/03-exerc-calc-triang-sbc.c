#include <stdio.h>
#include <math.h>

int main() {

  // Declarar as variaveis
  int a, b, c, d;
  float pABC, pABD, pACD, pBCD;
  float aABC, aABD, aACD, aBCD;

  // Ler os 4 lados no formato especificado
  scanf("%d%d%d%d", &a, &b, &c, &d);

  // Calcular P e A para cada uma das combinacoes
  pABC = (a + b + c) / 2.0;
  aABC = sqrt( pABC * ( pABC - a ) * ( pABC - b ) * ( pABC - c ));

  pABD = (a + b + d) / 2.0;
  aABD = sqrt( pABD * ( pABD - a ) * ( pABD - b ) * ( pABD - d ));

  pACD = (a + c + d) / 2.0;
  aACD = sqrt( pACD * ( pACD - a ) * ( pACD - c ) * ( pACD - d ));

  pBCD = (b + c + d) / 2.0;
  aBCD = sqrt( pBCD * ( pBCD - b ) * ( pBCD - c ) * ( pBCD - d ));

  // Verificar o resultado - aXYZ > 0
  if ( aABC > 0 || aABD > 0 || aACD > 0 || aBCD > 0 ) {
    printf("S\n");
  } else {
    printf("N\n");
  }

  return 0;
}
