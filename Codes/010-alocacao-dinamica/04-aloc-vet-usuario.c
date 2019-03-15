#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *v, int n){

}

void imprimir(int *v, int n) {

}

int* alocar(int n) {
  return (int*) malloc (n * sizeof(int));
}

void liberar(int *p){
  free(p);
}

int main(int argc, char const *argv[]) {

  int n, i;
  int *p;

  printf("Informe a quantidade: ");
  scanf("%d", &n);

  // MALLOC:
  // tipo *PONTEIRO
  // PONTEIRO = (tipo *) malloc ( quantidade * sizeof(tipo) );
  p = (int *) malloc ( n * sizeof(int) );

  if ( p == NULL ) {
    printf("Memoria insuficiente!\n");
  } else {

    printf("Digite os valores: \n");
    for(i = 0; i < n; i++) {
      scanf("%d", &p[i]);
    }

    printf("Valores informados: \n");
    for(i = 0; i < n; i++) {
      printf("[%d] = %d\n", i, p[i]);
    }

    // Liberar a memoria
    free(p);

  }







  return 0;
}
