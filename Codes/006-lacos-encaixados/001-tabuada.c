#include <stdio.h>

void tabuada() {

  int i, j;

  for(i = 1; i <= 10; i++) {
    printf("Tabuada de %d: \n", i);
    for(j = 1; j <= 10; j++) {
      printf("%d * %d = %d\n", i, j, i * j);
    }
    printf("\n");
  }

}


int main(int argc, char const *argv[]) {

  tabuada();

  return 0;
}
