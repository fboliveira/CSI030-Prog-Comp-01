#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, n, produto;
  printf("Informe a quantidade: ");
  scanf("%d", &n);

  int A[n], B[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  for(i = 0; i < n; i++) {
    scanf("%d", &B[i]);
  }

  produto = 0;

  for(i = 0; i < n; i++) {
    produto = produto + A[i] * B[i];
  }

  printf("O produto interno e %d\n", produto);




  return 0;
}
