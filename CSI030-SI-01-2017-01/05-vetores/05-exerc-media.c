#include <stdio.h>

double media(int vetor[], int tamanho) {

  double soma = 0;
  int i;

  for(i = 0; i < tamanho; i++) {
    soma = soma + vetor[i];
  }

  soma = soma / tamanho;
  return soma;

}

int main(int argc, char const *argv[]) {

  int i, n = 10, vetor[n];
  double med;

  printf("Informe os valores: ");
  for(i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  med = media(vetor, n);
  printf("A media e %lf\n", med);





  return 0;
}
