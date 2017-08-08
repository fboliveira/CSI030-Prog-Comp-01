#include <stdio.h>
#include <math.h>

// Serie = 1 + x + (x^2 - 1) / 2 + ... + ((x^n) - (n - 1)) / n

int serie(int x, int n) {
  // Base
  if (n == 0) {
    return 1;
  } else if (n == 1) {
    return x;
  } else {
    return (pow(x,n) - (n - 1)) / (float)n + serie(x, n-1);
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
