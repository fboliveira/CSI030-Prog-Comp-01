#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i, aux, anterior = 0, proximo = 1;

  printf("Informe o elemento da serie\n");
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {

      printf("%d ", proximo);

      aux = anterior + proximo;
      anterior = proximo;
      proximo = aux;
  }
  printf("\n");
  return 0;
}
