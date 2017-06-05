#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, n;

  printf("Informe um numero\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("%d\n", i);
  }

  return 0;
}
