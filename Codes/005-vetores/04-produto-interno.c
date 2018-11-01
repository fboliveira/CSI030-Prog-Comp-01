#include <stdio.h>

void lerVetor(int vetor[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("v[%d] = ", i);
    scanf("%d", &vetor[i]);
  }

}

void imprimirVetor(int vetor[], int n){
  int i;
  for(i = 0; i < n; i++) {
    printf("v[%d] = %d\n", i, vetor[i]);

  }
}


int main(int argc, char const *argv[]) {

  int n, produto = 0, i;

  printf("Digite a quantidade de elementos: ");
  scanf("%d", &n);

  int va[n];
  int vb[n];

  printf("Digite os valores do primeiro vetor:\n");
  lerVetor(va, n);

  printf("Digite os valores do segundo vetor:\n");
  lerVetor(vb, n);

  for(i = 0; i < n; i++) {
    produto = produto + va[i] * vb[i];
  }

  imprimirVetor(va, n);
  imprimirVetor(vb, n);

  printf("Produto interno = %d\n", produto);






  return 0;
}
