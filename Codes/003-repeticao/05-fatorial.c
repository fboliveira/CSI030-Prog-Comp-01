#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, n, f = 1;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
    f = f * i;
  }

  printf("Fatorial = %d\n", f);

  return 0;
}
