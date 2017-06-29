#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, soma, n;
  soma = 0;
  n = 5;

  int A[n], B[n];

  // Ler vetor A
  for(i = 0; i < n; i++) {
    printf("A[%d]: ",i);
    scanf("%d", &A[i]);
  }

  // Ler vetor B
  for(i = 0; i < n; i++) {
    printf("B[%d]: ",i);
    scanf("%d", &B[i]);
  }

  // Calcular o produto interno
  for(i = 0; i < n; i++){
    soma = soma + A[i] * B[i];
  }

  printf("O produto interno e %d\n", soma);



  return 0;
}
