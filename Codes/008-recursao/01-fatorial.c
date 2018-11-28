#include <stdio.h>

int fatorial(int n) {
  if ( n == 1 ) {
    return 1;
  } else {
      return n * fatorial(n - 1);
  }
}


int main(int argc, char const *argv[]) {

  int n;
  printf("Digite um valor: ");
  scanf("%d", &n);

  printf("Fatorial = %d\n", fatorial(n));


  return 0;
}
