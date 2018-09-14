#include <stdio.h>

int main(int argc, char const *argv[]) {

  float vd, vp, dif, vdoriginal, desconto;
  int tipo;

  printf("Informe o valor devido: ");
  scanf("%f", &vdoriginal);

  printf("Informe o valor pago: ");
  scanf("%f", &vp);

  printf("Informe o modo de pagamento: 1 - dinheiro / 2 - cartao de debito / 3 - cartao de credito\n");
  scanf("%d", &tipo);

  // Desconto
  if ( tipo == 1 ) {
    desconto = vdoriginal * 0.1;
  } else if ( tipo == 2 ) {
      desconto = vdoriginal * 0.05;
  } else {
    desconto = 0;
  }

  vd = vdoriginal - desconto;

  printf("Valor devido original: R$ %.2f\n", vdoriginal);
  printf("Desconto: R$ %.2f\n", desconto);
  printf("Valor devido final: R$ %.2f\n", vd);

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
