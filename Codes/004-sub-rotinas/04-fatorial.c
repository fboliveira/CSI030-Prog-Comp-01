#include <stdio.h>

int fatorial(int n) {
  int i, fat = 1;

  for(i = 1; i <= n; i++) {
    fat = fat * i;
  }


  return fat;

}


int main(int argc, char const *argv[]) {

  int n, resultado;

  printf("Digite um numero: ");
  scanf("%d", &n);

  // calcular fatorial
  resultado = fatorial(n);

  printf("Fatorial = %d\n", resultado);








  return 0;
}
