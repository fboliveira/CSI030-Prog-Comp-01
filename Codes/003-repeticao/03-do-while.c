#include <stdio.h>

int main() {

  int i, n;


  i = 9;
  n = 10;
  printf("While: \n");
  while ( i >= n ) {
    printf("%d\n", i);
    i++;
  }

  i = 9;
  printf("Do-while:\n");
  do {
    printf("%d\n", i);
    i++;
  } while(i >= n);


  return 0;
}
