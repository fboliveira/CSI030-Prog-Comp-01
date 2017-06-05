#include <stdio.h>

int main(int argc, char const *argv[]) {

  // Declarar variaveis
  int i = 1, n;

  // Ler o valor de N
  printf("Informe um numero\n");
  scanf("%d", &n);

  // Faça
  do {
    // Imprimir I
    printf("%d\n", i);
    // Incrementar I
    i++;
  } while ( i <= n );
  // Enquanto I <= N



  return 0;
}
