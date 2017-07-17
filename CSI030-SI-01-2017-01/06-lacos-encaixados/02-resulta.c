#include <stdio.h>

void resulta_em(int numero) {

  int i, j, li, ls, r;

  li = -20;
  ls = 20;

  for(i = li; i <= ls; i++) {

    for(j = li; j <= ls; j++) {
      r = i * j;
      if (r == numero) {
        printf("%d x %d = %d\n", i, j, r);
      }
    }
  }
}

int main(int argc, char const *argv[]) {

  int x;
  printf("Informe o numero: \n");
  scanf("%d", &x);

  resulta_em(x);

  return 0;
}
