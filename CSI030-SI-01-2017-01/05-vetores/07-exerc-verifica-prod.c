#include <stdio.h>

int verifica(int vetor[], int tamanho, int produto) {

  int i, j;
  for(i = 0; i < tamanho - 1; i++) {
    for(j = i + 1; j < tamanho; j++) {
      if (vetor[i] * vetor[j] == produto) {
        return 1;
      }
    }
  }

  return 0;

}

int main(int argc, char const *argv[]) {

  int i, n, produto;
  printf("Informe a quantidade de numeros: ");
  scanf("%d", &n);

  int vetor[n];

  printf("Informe os valores: \n");
  for(i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("Informe o produto a ser verificado: \n");
  scanf("%d", &produto);

  if (verifica(vetor, n, produto) == 1) {
    printf("Existe o produto no vetor!\n");
  } else {
    printf("O produto nao existe no vetor!\n");
  }

  return 0;
}
