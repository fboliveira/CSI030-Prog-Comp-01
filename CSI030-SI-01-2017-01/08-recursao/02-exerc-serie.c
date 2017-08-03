#include <stdio.h>
#include <math.h>

int serie(int x, int n) {
  // Base
  if (n == 0) {
    return 1;
  } else {
    return pow(x,n) + serie(x, n-1);
  }
}

int main(int argc, char const *argv[]) {

  int x, n;

  printf("Digite X: ");
  scanf("%d", &x);

  printf("Digite N: ");
  scanf("%d", &n);

  printf("Serie = %d\n", serie(x, n));


  return 0;
}
