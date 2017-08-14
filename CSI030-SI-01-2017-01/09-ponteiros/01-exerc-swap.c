#include <stdio.h>

void swap(int *x, int *y) {
  int aux;
  aux = *y;
  *y = *x;
  *x = aux;
}

void swap2x(int *x, int *y) {
  int aux;
  aux = *y;
  *y = *x;
  *x = aux;

  *x = 2 * (*x);
  *y = 2 * (*y);

}

int main(int argc, char const *argv[]) {

  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  swap(&a, &b);
  printf("Swap = A: %d\tB = %d\n", a, b);

  swap2x(&a, &b);
  printf("Swap 2X = A: %d\tB = %d\n", a, b);

  return 0;
}
