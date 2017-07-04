#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, n;
  printf("Informe a quantidade: ");
  scanf("%d", &n);

  int vetor[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("Valores lidos em ordem Crescente: \n");
  for(i = 0; i < n; i++) {
    printf("%d\n", vetor[i]);
  }

  printf("Valores lidos em ordem Decrescente: \n");
  for(i = n - 1; i >= 0; i--) {
    printf("%d\n", vetor[i]);
  }





  return 0;
}
