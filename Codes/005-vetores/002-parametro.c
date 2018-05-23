#include <stdio.h>

void mult(int v[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    v[i] = 2 * v[i];
  }
}

void imprimir(int v[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%d\t", v[i]);
  }
  printf("\n");
}

void soma(int v) {
  v = v + 10;
}

void somaVetor(int v[]) {
  v[2] = v[2] + 10;
}

int main(int argc, char const *argv[]) {

  int n;
  printf("Informe a quantidade de numeros: ");
  scanf("%d", &n);

  int vetor[n];
  int i;

  for(i = 0; i < n; i++) {
    vetor[i] = i + 1;
  }

  imprimir(vetor, n);
  mult(vetor, n);
  imprimir(vetor, n);

  soma(vetor[0]);
  imprimir(vetor, n);

  somaVetor(vetor);
  imprimir(vetor, n);

  imprimir(vetor, 3);




  return 0;
}
