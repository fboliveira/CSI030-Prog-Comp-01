#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i, x, pos = 0, neg = 0,
      somap = 0, soman = 0;

  float mediap, median;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);

  i = 1;

  while ( i <= n ) {
      printf("Digite o numero: ");
      scanf("%d", &x);

      if ( x >= 0 ) {
        pos++;
        somap = somap + x;
      } else {
        neg++;
        soman = soman + x;
      }

      i++;

  }

  printf("Positivos: %d\n", pos);
  if ( pos > 0 ) {
    mediap = (float)somap / pos;
    printf("Soma dos positivos: %d\n", somap);
    printf("Media dos positivos: %.2f\n", mediap);
  }

  printf("Negativos: %d\n", neg);
  if ( neg > 0 ) {
    median = soman;
    median = median / neg;
    printf("Soma dos negativos: %d\n", soman);
    printf("Media dos negativos: %.2f\n", median);
  }



  return 0;
}
