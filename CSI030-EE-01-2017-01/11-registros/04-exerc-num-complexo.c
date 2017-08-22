#include <stdio.h>

typedef struct complexo {
  float real;
  float imaginaria;
} Complexo;

int main(int argc, char const *argv[]) {

  Complexo n1, n2, soma;

  printf("Informe os numeros: ");
  scanf("%f", &n1.real);
  scanf("%f", &n1.imaginaria);

  scanf("%f", &n2.real);
  scanf("%f", &n2.imaginaria);

  soma.real = n1.real + n2.real;
  soma.imaginaria = n1.imaginaria + n2.imaginaria;

  printf("Soma = %.2f + (%.2f)i\n",
          soma.real, soma.imaginaria);




  return 0;
}
