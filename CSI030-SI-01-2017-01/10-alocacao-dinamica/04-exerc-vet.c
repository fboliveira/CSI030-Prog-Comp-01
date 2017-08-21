#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int i, n, *p = NULL;

  printf("Informe a quantidade: \n");
  scanf("%d", &n);

  p = (int *) malloc( n * sizeof(int) );

  if ( p == NULL ) {
    printf("Memoria insuficiente!\n");
  } else {

    printf("Informe os valores:\n");
    for(i = 0; i < n; i++) {
      scanf("%d", &p[i]);
    }

    printf("Valores informados:\n");
    for(i = 0; i < n; i++) {      
      printf("%d\n", *(p + i));
    }
  }

  free(p);




  return 0;
}
