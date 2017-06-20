#include <stdio.h>

int main(int argc, char const *argv[]) {


    int n, i, pos, neg, x;

    printf("Informe a quantidade de numeros: ");
    scanf("%d", &n);

    pos = 0;
    neg = 0;

    for(i = 1; i <= n; i++) {

      printf("Digite um numero: ");
      scanf("%d", &x);

      if ( x > 0 ) {
        pos++;
      } else if ( x < 0 ) {
        neg++;
      }

    }

    printf("Positivos = %d\n", pos);
    printf("Negativos = %d\n", neg);





  return 0;
}
