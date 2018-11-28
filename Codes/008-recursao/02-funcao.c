#include <stdio.h>
#include <math.h>

double funcao (int x, int n) {
  // Caso base:
  if ( n == 0 ) {
    return 1 + x;
  } else {
    // Caso recursivo - iterativo
    return (pow(x, n) + n) + funcao(x, n - 1);
  }
}

int main(int argc, char const *argv[]) {

  double s;
  int x, n;
  printf("Digite o valor de X: ");
  scanf("%d", &x);
  printf("Digite o valor de N: ");
  scanf("%d", &n);

  s = funcao(x, n);
  printf("Serie = %lf\n", s);

  return 0;
}
