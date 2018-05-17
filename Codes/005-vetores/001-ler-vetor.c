#include <stdio.h>


int main(int argc, char const *argv[]) {

  int n = 5;
  int v[n];
  int i;

  // Ler o vetor
  for(i = 0; i < n; i++) {
    printf("Digite o valor [%d]: ", i);
    scanf("%d", &v[i]);
  }

  // Imprimir os valores lidos - ASC
  for(i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }

  // Imprimir os valores lidos - DEC
  for(i = n - 1; i >= 0; i--) {
    printf("-> %d\n", v[i]);
  }










  return 0;
}
