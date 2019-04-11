#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, y, res;
  float div;
  char op;

  printf("Digite um numero: ");
  scanf("%d", &x);

  printf("Digite a operacao: ");
  scanf(" %c", &op);

  printf("Digite outro numero: ");
  scanf("%d", &y);

  switch (op) {
    case '+':
      res = x + y;
      printf("Soma = %d\n", res);
      break;

    case '-':
      res = x - y;
      printf("Subtracao = %d\n", res);
      break;

    case '*':
      res = x * y;
      printf("Multiplicacao = %d\n", res);
      break;

    case '/':
      div = (float)x / y;
      printf("Divisao = %.2f\n", div);
      break;

    default:
      printf("Operacao invalida!\n");


  }






  return 0;
}
