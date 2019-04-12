#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i;
  i = 1;
  n = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  do {
    printf("%d\n", i);
    i++;
  } while (i <= n);








  return 0;
}
