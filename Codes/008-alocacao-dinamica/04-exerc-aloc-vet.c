#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *v, int n) {
  int i;
  printf("Digite os valores:\n");
  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void imprimir(int *v, int n) {
  int i;
  printf("Resultado:\n");

  for(i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int* alocar(int n) {
  return (int *) malloc(n * sizeof(int));
}

void liberar(int *v) {
  free(v);
}

int main(int argc, char const *argv[]) {

  int n, i;
  int *v = NULL;

  printf("Informe a quantidade: ");
  scanf("%d", &n);

  v = alocar(n);

  lerVetor(v, n);
  imprimir(v, n);



  free(v);

  return 0;
}
