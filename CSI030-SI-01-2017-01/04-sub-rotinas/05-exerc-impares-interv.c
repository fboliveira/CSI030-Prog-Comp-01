#include <stdio.h>

int imparesIntervalo(int n1, int n2) {

  int i, inicio, fim, n = 0;

  if ( n1 > n2 ) {
      inicio = n2;
      fim = n1;
  } else {
    inicio = n1;
    fim = n2;
  }

  for(i = inicio; i <= fim; i++) {
    if (i % 2 != 0) {
        n++;
    }
  }

  return n;

}

int main(int argc, char const *argv[]) {

  int x, y, n;

  printf("Informe os numeros: ");
  scanf("%d", &x);
  scanf("%d", &y);

  n = imparesIntervalo(x, y);
  printf("A quantidade e %d\n", n);

  return 0;
}
