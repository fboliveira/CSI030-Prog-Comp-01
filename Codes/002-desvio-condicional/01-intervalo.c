#include <stdio.h>

int main(int argc, char const *argv[]) {

  int valor;
  printf("Digite um valor: ");
  scanf("%d", &valor);

  if ( valor >= 20 && valor <= 90 ) {
      printf("O valor esta no intervalo [20,90]\n");
      printf("Parabens! Voce acertou!\n");
  } else {
    printf("O valor nao esta no intervalo.\n");
    printf("Tente novamente.\n");
  }








  return 0;
}
