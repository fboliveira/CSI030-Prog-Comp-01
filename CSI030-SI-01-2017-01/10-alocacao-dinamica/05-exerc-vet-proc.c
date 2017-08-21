#include <stdio.h>
#include <stdlib.h>

void preencher(int *p, int n) {
  int i;

  printf("Informe os valores:\n");
  for(i = 0; i < n; i++) {
    scanf("%d", &p[i]);
  }
}

void imprimir(int *p, int n) {

  int i;

  printf("Valores informados:\n");
  for(i = 0; i < n; i++) {
    printf("%d\n", p[i]);
  }

}

int* alocar(int n) {
  return (int *) malloc( n * sizeof(int) );
}

void alocarProc(int *p, int n) {
  p = (int *) malloc( n * sizeof(int) );
}


int main(int argc, char const *argv[]) {

  int i, n, *p = NULL;

  printf("Informe a quantidade: \n");
  scanf("%d", &n);

  p = alocar(n);

  if ( p == NULL ) {
    printf("Memoria insuficiente!\n");
  } else {

    preencher(p, n);
    imprimir(p, n);

  }

  free(p);




  return 0;
}
