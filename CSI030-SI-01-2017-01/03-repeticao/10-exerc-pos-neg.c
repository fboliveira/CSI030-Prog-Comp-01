#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, i, x, neg, pos;
  neg = 0;
  pos = 0;

  printf("Digite a quantidade de numeros\n");
  scanf("%d", &n);

  for( i = 1; i <= n; i++) {

    // Ler o numero - x
    printf("Digite o numero: ");
    scanf("%d", &x);

    // Verificar - pos ou neg
    if ( x > 0) {
      pos++;
    } else if ( x < 0 ) {
      neg++;
    }

  }

  // Apresentar o resultado
  printf("Numeros positivos: %d\n", pos);
  printf("Numeros negativos: %d\n", neg);





  return 0;
}
