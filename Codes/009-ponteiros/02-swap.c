#include <stdio.h>

void swap(int *a, int *b) {

  int aux;

  // Troca *a <-> *b
  aux = *a;
  *a = *b;
  *b = aux;

}

int main(int argc, char const *argv[]) {

  int x, y;

  printf("Digite os valores:\n");
  scanf("%d", &x);
  scanf("%d", &y);

  swap(&x, &y);

  printf("Valor X = %d\n", x);
  printf("Valor Y = %d\n", y);

  return 0;
}
