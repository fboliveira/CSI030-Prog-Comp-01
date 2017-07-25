#include <stdio.h>

void tabuada() {

  int i, j, n = 10;

  for(i = 1; i <= n; i++) {
    printf("Tabuada de %d\n", i);
    for(j = 1; j <= n; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
    printf("\n");
  }

}

int main(int argc, char const *argv[]) {

  tabuada();
  return 0;
}
