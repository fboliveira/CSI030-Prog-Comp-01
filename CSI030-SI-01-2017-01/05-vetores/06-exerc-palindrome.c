#include <stdio.h>

int palindrome(int vetor[], int tamanho) {

  int i, j, p;

  p = 1;
  j = tamanho - 1;

  for(i = 0; i < tamanho; i++) {
    if (vetor[i] != vetor[j]) {
      p = 0;
      break;
    }
    j--;

    if (i > j) {
      break;
    }

  }

  return p;

}

int main(int argc, char const *argv[]) {

  int i, n;
  printf("Informe a quantidade de numeros: ");
  scanf("%d", &n);

  int vetor[n];

  printf("Informe os valores: \n");
  for(i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  if (palindrome(vetor, n) == 1) {
    printf("Eh palindrome!\n");
  } else {
    printf("Nao eh palindrome!\n");
  }






  return 0;
}
