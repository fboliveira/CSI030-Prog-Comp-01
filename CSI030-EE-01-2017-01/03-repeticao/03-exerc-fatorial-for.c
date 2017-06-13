#include <stdio.h>

int main(int argc, char const *argv[]) {

  // Declarar as variaveis
  int n, i;

  long int fat;

  fat = 1;

  // Ler o valor de N
  printf("Informe o valor\n");
  scanf("%d", &n);

  // Calcular o fatorial - FOR: 2-N
  //for( i = 2; i <= n; i++ ) {
  // Calcular o fatorial - FOR: N-2
  for( i = n; i >= 2 n; i-- ) {
    fat = fat * i; // fat *= i
  }

  printf("O fatorial de %d e %ld\n", n, fat);




  return 0;
}
