#include <stdio.h>

int somaintervalo(int n1, int n2) {

  int i, soma, inicio, fim;
  soma = 0;

  if (n1 < n2) {
    inicio = n1;
    fim = n2;
  } else {
    inicio = n2;
    fim = n1;
  }

  for(i = inicio; i <= fim; i++) {
    soma = soma + i;
  }

  return soma;
}

int main(int argc, char const *argv[]) {

  int n1, n2, n;
  printf("Informe os valores\n");
  scanf("%d", &n1);
  scanf("%d", &n2);

  n = somaintervalo(n1, n2);
  printf("A soma e %d\n", n);

  return 0;
}
