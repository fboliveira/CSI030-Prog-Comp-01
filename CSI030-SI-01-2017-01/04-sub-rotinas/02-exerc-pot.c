#include <stdio.h>

int potencia(int a, int b) {
  int resultado, i;
  resultado = 1;

  for(i = 1; i <= b; i++) {
    resultado = resultado * a;
  }

  return resultado;
}

int main(int argc, char const *argv[]) {

  int base, expoente, resultado;

  printf("Informe a base: ");
  scanf("%d", &base);

  printf("Informe o expoente: ");
  scanf("%d", &expoente);

  resultado = potencia(base, expoente);
  printf("A potencia e %d\n", resultado);
  return 0;








}
