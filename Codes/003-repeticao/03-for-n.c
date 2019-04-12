#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i;
  i = 1;
  n = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for( i = 1; i <= n; i++ ) {
    printf("%d\n", i);
  }



  return 0;
}
