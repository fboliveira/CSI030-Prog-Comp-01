#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int n, soma = 0;
  float media, inv;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int v[n];
  int i;

  // Entrada
  for(i = 0; i < n; i++) {
    printf("Digite a posicao %d = ", i);
    scanf("%d", &v[i]);
  }

  // Operacoes
  for(i = 0; i < n; i++) {
    soma = soma + v[i];
  }

  media = ((float)soma) / n;
  printf("Soma = %d\n", soma);
  printf("Media = %.2f\n", media);

  // Inversos
  for(i = 0; i < n; i++) {
    if ( v[i] != 0 ) {
      inv = 1.0 / v[i];
      printf("v[%d] = %d -> Inv: %.2f\n", i, v[i], inv);
    }
  }






  return 0;
}
