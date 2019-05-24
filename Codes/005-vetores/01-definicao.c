#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n;
  int i;
  int soma = 0;
  float media;

  // 01 - definir o tamanho de n
  printf("Digite a quantidade: ");
  scanf("%d", &n);

  // 02 - criar um vetor de tamanho n
  int v[n];
  int w[n];

  // Leitura
  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  // Operacoes
  for(i = 0; i < n; i++) {
    soma += v[i];
  }

  for(i = 0; i < n; i++) {
    w[i] = i * v[i];
  }

  // media
  media = (float)soma / n;

  // Impressao
  for(i = n - 1; i >= 0; i--) {
    printf("v[%d] = %d\n", i, v[i]);
  }

  printf("Soma = %d\n", soma);
  printf("Media = %.2f\n", media);

  for(i = 0; i < n; i++) {
    printf("w[%d] = %d\n", i, w[i]);
  }



  return 0;
}
