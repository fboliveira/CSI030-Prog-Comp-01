#include <stdio.h>

int maiorValor(int vetor[], int tamanho) {
  int i, maior;
  maior = vetor[0];

  for(i = 1; i < tamanho; i++) {
    if ( vetor[i] > maior ) {
      maior = vetor[i];
    }
  }

  return maior;

}

int main(int argc, char const *argv[]) {

  int n = 5, i, maior;
  int vetor[n];

  printf("Informe os valores: \n");
  for(i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  maior = maiorValor(vetor, n);
  printf("O maior valor e %d\n", maior);


  return 0;
}
