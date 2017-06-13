#include <stdio.h>

int main(int argc, char const *argv[]) {

  int N, x, maior, menor, i;

  // Perguntar ao usuario a quantidade N
  printf("Informe a quantidade de numeros\n");
  scanf("%d", &N);

  // Ler o primeiro valor
  printf("Informe o primeiro valor\n");
  scanf("%d", &x);

  // Atribuir para maior e menor o valo lido
  maior = x;
  menor = x;

  // Ler o demais valores (N - 1)
  for(i = 2; i <= N; i++) {

    printf("Informe o numero %d\n", i);
    scanf("%d", &x);
    // Se e maior
    if (x > maior) {
      maior = x;
    } else if ( x < menor ) {
    // Se e menor
              menor = x;
  }

  }
  // Imprimir o resultado
  printf("Maior numero = %d\n", maior);
  printf("Menor numero = %d\n", menor);

  return 0;
}
