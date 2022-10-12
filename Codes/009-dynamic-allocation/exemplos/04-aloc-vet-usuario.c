#include <stdio.h>
#include <stdlib.h>

void imprimir(int *p, int n) {
  int i;
  printf("Valores informados: \n");
  for(i = 0; i < n; i++) {
    printf("[%d] = %d\n", i, p[i]);
  }
}

void ler(int *p, int n) {

  int i;
  for( i = 0; i < n; i++) {
    printf("[%d] = ", i);
    scanf("%d", &p[i]);
  }

}

int* alocar(int n) {
  return (int *) malloc( n * sizeof(int) );
}

void liberar(int *p) {
  free(p);
}

int main(int argc, char const *argv[]) {

  int n, i;
  int *p;

  printf("Informe a quantidade: ");
  scanf("%d", &n);

  // TIPO *PONTEIRO = (TIPO *) malloc ( quantidade * sizeof(TIPO));
  p = alocar(n);

  if ( p == NULL ) {
    printf("Memoria insuficiente!\n");
  } else {

    // Ler cada um dos valores
    ler(p, n);

    // Imprimir os valores
    imprimir(p, n);

    // Liberar a Memoria
    liberar(p);

  }

  return 0;
}
