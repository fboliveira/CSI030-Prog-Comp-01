#include <stdio.h>

int potencia(int base, int expoente) {

  int i, p = 1;

  for(i = 1; i <= expoente; i++) {
    p = p * base;
  }

  return p;

}

int main() {

  int base, expoente, resultado;
  printf("Digite a base: ");
  scanf("%d", &base);

  printf("Digite o expoente: ");
  scanf("%d", &expoente);

  resultado = potencia(base, expoente);
  printf("Potencia = %d\n", resultado);

  return 0;
}
