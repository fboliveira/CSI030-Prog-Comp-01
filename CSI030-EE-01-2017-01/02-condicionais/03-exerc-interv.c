#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x;

  printf("Informe um valor\n");
  scanf("%d", &x);

  if ( x >= 20 && x <= 90 ) {
    printf("O valor esta no intervalo!\n");
  } else {
    printf("O valor nao esta no intervalo!\n");
  }









  return 0;
}
