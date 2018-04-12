#include <stdio.h>

int main(int argc, char const *argv[]) {

  int numero;

  printf("Informe um numero:" );
  scanf("%d", &numero);

  // numero -> [20; 90]
  // 20 <= numero <= 90
  if (numero >= 20 && numero <= 90) {
      printf("O numero esta no intervalo [20;90]\n");
  } else {
    printf("O numero esta fora do intervalo.\n");

  }








  return 0;
}
