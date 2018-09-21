#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i = 1;


  printf("Digite um numero: ");
  scanf("%d", &n);

  i = 1;
  while ( i <= n ) {
    printf("%d\n", i);
    i++;
  }


  return 0;
}
