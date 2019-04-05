#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n;
  printf("Informe um numero: ");
  scanf("%d", &n);

  if ( n >= 30 && n <= 50 ) {
    printf("O valor esta no intervalo!\n");
    printf("Parabens! Voce acertou!\n");
    printf("Numero digitado: %d \n", n);
  }
  else {
    printf("O valor nao esta no intervalo");
    printf("Tente novamente.\n");
  }











  return 0;
}
