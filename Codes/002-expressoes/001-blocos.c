#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x = 3;

  {
    //int x = 1;
    x = x + 10;
    printf("O valor de x e: %d", x);
  }

  printf("O valor de x e: %d", x);

  return 0;
}
