#include <stdio.h>

// Assinaturas
int soma2(int x);
int soma(int x, int y);
void imprimeMaior(int x, int y);

int main(int argc, char const *argv[]) {

  int n, k, s;
  printf("Informe um numero:" );
  scanf("%d", &n);

  printf("Informe outro numero:" );
  scanf("%d", &k);

  s = soma2(n);
  printf("soma2 e: %d\n", s);

  s = soma(n, k);
  printf("soma e: %d\n", s);

  imprimeMaior(n, k);






  return 0;
}

int soma2(int x) {
  x = x + 2;
  return x; // x + 2
}

int soma(int x, int y) {
  int s = x + y;
  return s; // x + y
}

void imprimeMaior(int x, int y) {
  if (x > y) {
    printf("X e maior = %d\n", x);
  } else {
    printf("Y e maior = %d\n", y);
  }
}