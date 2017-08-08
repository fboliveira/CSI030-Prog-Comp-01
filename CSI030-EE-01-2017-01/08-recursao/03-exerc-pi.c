#include <stdio.h>
#include <math.h>

double pi(int n) {

  if (n == 0) {
    return 1.0;
  } else {
    return (powf(-1, n) / (2 * n + 1)) + pi(n - 1);
  }
}

int main(int argc, char const *argv[]) {

  int n = 10;
  printf("PI/4 = %lf \n", pi(n));

  return 0;
}
