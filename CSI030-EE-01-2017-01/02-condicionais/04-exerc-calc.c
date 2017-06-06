#include <stdio.h>

int main(int argc, char const *argv[]) {

  // Declarar variaveis
  int x, y, resInt;
  float resDecimal;
  char op; // '+',

  // Ler um numero
  printf("Informe um numero\n");
  scanf("%d", &x);
  // Ler operacao
  printf("Informe a operacao\n");
  scanf(" %c", &op);
  // Ler o outro numero
  printf("Informe o outro numero\n");
  scanf("%d", &y);

  // Realizar o calculo conforme a operacao
  if ( op == '+' ) {
    resInt = x + y;
    printf("A soma e %d\n", resInt);
  } else if ( op == '-' ) {
    resInt = x - y;
    printf("A subtracao e %d\n", resInt);
  } else if ( op == '*' ) {
    resInt = x * y;
    printf("A multiplicacao e %d\n", resInt);
  } else if ( op == '/' ) {
    resDecimal = (float)x / y;
    printf("A divisao e %f\n", resDecimal);
  } else {
    printf("A operacao e invalida!\n");
  }










  return 0;
}
