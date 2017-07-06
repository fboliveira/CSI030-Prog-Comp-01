#include <stdio.h>

int maiorValor(int vetor[], int tamanho) {
  int i, maior;
  maior = vetor[0];

  for(i = 0; i < tamanho; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
  }
  return maior;
}

int main(int argc, char const *argv[]) {

  int i, n = 5, v[n], maior;
  printf("Informe os valores: \n");
  for(i = 0; i < n; i++) {
    scanf("%d\n", &v[i]);
  }

  maior = maiorValor(v, n);
  printf("O maior valor e %d\n", maior);

  return 0;
}
