#include <stdio.h>

int main(int argc, char const *argv[]) {

  // Declarar variaveis
  int i, n;

  // Receber o valor de N
  printf("Informe a quantidade: \n");
  scanf("%d", &n);

  // Criar um vetor de tamanho N
  int num[n];

  // Ler cada um dos valores
  for(i = 0; i < n; i++) {
    printf("Digite o valor %d\n", i+1);
    scanf("%d", &num[i]);
  }

  // Imprimir os valores ASC:
  for(i = 0; i < n; i++) {
    printf("Valor %d = %d\n", i+1, num[i]);
  }

  // Imprimir os valores DESC:
  for(i = n - 1; i >=0 ; i--) {
    printf("Valor DESC: %d = %d\n", i+1, num[i]);
  }








  return 0;
}
