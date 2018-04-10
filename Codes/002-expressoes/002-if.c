#include <stdio.h>

int main(int argc, char const *argv[]) {

  int conta;
  int pago;
  int troco;

  printf("Informe o valor da conta:" );
  scanf("%d", &conta);

  printf("Informe o valor pago:" );
  scanf("%d", &pago);

  if (pago >= conta) {
      troco = pago - conta;
      printf("Conta paga com sucesso!\n");
      printf("O troco e de: %d\n", troco);
  } else {
      printf("O valor pago e insuficiente!\n");
  }







  return 0;
}
