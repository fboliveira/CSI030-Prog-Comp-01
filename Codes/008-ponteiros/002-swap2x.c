#include <stdio.h>

void swap2x(int *a, int *b) {

  int temp;

  // Troca
  temp = *a;
  *a = *b;
  *b = temp;

  // Duplica
  *a = (*a) * 2;
  *b = (*b) * 2;

}

int main(int argc, char const *argv[]) {

  int x = 5, y = 3;
  swap2x(&x, &y);

  printf("X = %d\nY = %d\n", x, y);








  return 0;
}
