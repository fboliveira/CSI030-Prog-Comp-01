#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, anterior, atual, proximo, i;

  printf("Informe o numero do elemento na serie: ");
  scanf("%d", &n);

  anterior = 0;
  atual = 1;

  for(i = 1; i <= n; i++) {

    printf("%d\t", atual);

    proximo = anterior + atual;
    anterior = atual;
    atual = proximo;
  }















  return 0;
}
