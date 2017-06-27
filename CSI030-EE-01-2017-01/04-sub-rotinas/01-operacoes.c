#include <stdio.h>

int soma(int X, int Y) {
  return (X + Y);
}

int sub(int X, int Y) {
  return (X - Y);
}

int mult(int X, int Y) {
  return (X * Y);
}

float div(int X, int Y) {
  return ((float)X / Y);
}

int main(int argc, char const *argv[]) {

  int A, B, C, S, M;
  float D;

  printf("Informe os numeros\n");
  scanf("%d", &A);
  scanf("%d", &B);

  C = soma(A, B);
  S = sub(A, B);
  M = mult(A, B);
  D = div(A, B);

  printf("Soma = %d\n", C);
  printf("Subtracao = %d\n", S);
  printf("Multiplicacao = %d\n", M);
  printf("Divisao = %.2f\n", D);









  return 0;
}
