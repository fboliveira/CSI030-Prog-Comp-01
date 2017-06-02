#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i = 1, N;

  scanf("%d", &N);

  if (!(N >= 1)) {
    printf("Informe um numero maior ou igual a 1\n");
  }

  while (i <= N) {
    printf("%d\n", i);
    i++;
  }

  return 0;
}
