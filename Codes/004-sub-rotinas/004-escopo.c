#include <stdio.h>

int x = 5;

int soma(int a) {
  return a + 2;
}


int mult(int a) {
  return a * x;
}

int op(int x) {
  return x * x;
}

void print(char letra, int valor) {
  printf("%c = %d\n", letra, valor);
}

int main(int argc, char const *argv[]) {

  int a = 2;
  int b = soma(a);
  int c = mult(x);

  a = op(a);

  return 0;
}
