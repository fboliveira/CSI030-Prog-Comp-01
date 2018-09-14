#include <stdio.h>

int main(int argc, char const *argv[]) {

  float vd, vp, dif;

  printf("Informe o valor devido: ");
  scanf("%f", &vd);

  printf("Informe o valor pago: ");
  scanf("%f", &vp);

  dif = vp - vd;

  if ( dif == 0 ) {
    printf("Conta recebida com sucesso! Nao existe troco.\n");
  } else if ( dif > 0 ) {
    printf("Conta recebida com sucesso! Troco de R$ %.2f\n", dif);
  } else {
    printf("O valor pago e insuficiente! Faltam R$ %.2f\n", dif * -1.0);
  }

  return 0;
}
