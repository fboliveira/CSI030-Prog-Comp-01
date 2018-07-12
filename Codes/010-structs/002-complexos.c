#include <stdio.h>

typedef struct regComplexo {
  float real;
  float imag;
} Complexo;

int main(int argc, char const *argv[]) {

  Complexo n1, n2, soma;

  // Ler os numeros
  printf("Primeiro numero: \n");
  printf("Parte real: ");
  scanf("%f", &n1.real);
  printf("Parte imaginaria: ");
  scanf("%f", &n1.imag);

  printf("Segundo numero: \n");
  printf("Parte real: ");
  scanf("%f", &n2.real);
  printf("Parte imaginaria: ");
  scanf("%f", &n2.imag);

  // Operar n1 + n2
  soma.real = n1.real + n2.real;
  soma.imag = n1.imag + n2.imag;

  printf("A soma: %f + ( %f )i\n", soma.real, soma.imag);

  return 0;
}
