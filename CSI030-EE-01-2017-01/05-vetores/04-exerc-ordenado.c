#include <stdio.h>

int ordenado(int vetor[], int tamanho) {

  int i, ordem;

  // Decrescente
  ordem = 1;
  for(i = 0; i < tamanho - 1; i++) {
    if (vetor[i] < vetor[i+1]) {
      // Falha
      ordem = 0;
      // Parar
      break;
    }
  }

  if (ordem == 0) {
    // Crescente
    ordem = -1;
    for(i = 0; i < tamanho - 1; i++) {
      if ( vetor[i] > vetor[i+1] ) {
        // Falha
        ordem = 0;
        // Parar
        break;
      }

    }
  }

  return ordem;

}

int main(int argc, char const *argv[]) {

  int i, tamanho = 5; vetor[tamanho], ordem;

  printf("Informe o valores:\n");
  for(i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);
  }

  ordem = ordenado(vetor, tamanho);

  if (ordem == 1) {
    printf("O vetor esta em ordem DECRESCENTE!\n");
  } else if (ordem == -1) {
    printf("O vetor esta em ordem CRESCENTE!\n");
  } else {
    printf("O vetor esta desordenado!\n");
  }

  return 0;
}
