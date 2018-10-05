#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {

  int n, i;

  srand(time(NULL));

  for(i = 1; i <= 10; i++) {
    n = rand() % 1000;
    printf("%d = %d\n", i, n);
  }











  return 0;
}
