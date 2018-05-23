#include <stdio.h>

int maiorValor(int vetor[], int tamanho) {
  int i, maior;

  maior = vetor[0];

  for(i = 1; i < tamanho; i++) {

    if (vetor[i] > maior) {
      maior = vetor[i];
    }

  }

  return maior;

}

int maiorPosicao(int vetor[], int tamanho) {
  int i, maior, imaior;

  maior = vetor[0];
  imaior = 0;

  for(i = 1; i < tamanho; i++) {

    if (vetor[i] > maior) {
      maior = vetor[i];
      imaior = i;
    }

  }

  return imaior;

}


int main(int argc, char const *argv[]) {

  int i, n = 5, v[n], maior;

  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  maior = maiorValor(v, n);
  printf("O maior valor: %d\n", maior);

  maior = maiorPosicao(v, n);
  printf("Posicao = %d - Valor = %d\n", maior, v[maior]);





  return 0;
}
