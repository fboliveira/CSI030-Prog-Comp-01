#include <stdio.h>

int ordenado(int vetor[], int tamanho) {

  int i, ordem;

  // Decrescente
  ordem = 1;
  for(i = 0; i < tamanho - 1; i++) {

    // Se falhou em algum momento
    if ( vetor[i] < vetor[i+1] ) {
      // Define a ordem como 0
      ordem = 0;
      // Para a procura
      break;
    }

  }

  if (ordem == 0) {
    ordem = -1;
    for(i = 0; i < tamanho - 1; i++) {
      if (vetor[i] > vetor[i+1]) {
        ordem = 0;
        break;
      }
    }
  }

  return ordem;

}

int main(int argc, char const *argv[]) {

  int n = 5, i, ordem;
  int vetor[n];

  printf("Informe os valores: \n");
  for(i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  ordem = ordenado(vetor, n);

  if (ordem == 1) {
    printf("O vetor esta em ordem Decrescente!\n");
  } else if (ordem == -1) {
    printf("O vetor esta em ordem Crescente!\n");
  } else {
    printf("O vetor esta desordenado!\n");
  }

  return 0;
}
