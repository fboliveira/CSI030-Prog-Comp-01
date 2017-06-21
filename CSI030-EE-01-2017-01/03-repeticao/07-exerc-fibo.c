#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i, soma, anterior = 0, proximo = 1;

  printf("Informe o elemento da serie: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {

    printf("%d\n", proximo);

    soma = anterior + proximo;
    anterior = proximo;
    proximo = soma;    
  }








  return 0;
}
