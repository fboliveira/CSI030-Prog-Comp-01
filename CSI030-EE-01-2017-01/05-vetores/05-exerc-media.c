#include <stdio.h>

double media(int vetor[], int tamanho) {

  int i;
  double soma = 0;

  for(i = 0; i < tamanho; i++) {
    soma = soma + vetor[i];
  }

  return (soma / tamanho);

}

int main(int argc, char const *argv[]) {

  int i, tamanho = 5; vetor[tamanho];
  double m;

  printf("Informe o valores:\n");
  for(i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);
  }

  m = media(vetor, tamanho);

  printf("A media e %lf\n", m);

  return 0;
}
