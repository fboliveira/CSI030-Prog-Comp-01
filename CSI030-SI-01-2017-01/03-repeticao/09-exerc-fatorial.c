#include <stdio.h>

int main(int argc, char const *argv[]) {

  // Definir variaveis
  int n; // numero
  int i; // contadora
  long int fat; // acumuladora

  // Inicializar a variavel acumuladora
  fat = 1;

  // Ler o numero N!
  printf("Digite um numero\n");
  scanf("%d", &n);

  // Calcular fat -> for
  for(i = 2; i <= n; i++) { // Ascendente
  // for(i = n; i >= 2 n; i--) { // Decrescente
    fat = fat * i;
  }

  printf("O fatorial de %d e %ld\n", n, fat);





  return 0;
}
