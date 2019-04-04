#include <stdio.h>

int main() {


  int x;
  int oposto;
  float inverso;

  printf("Digite um numero: ");
  scanf("%d", &x);

  oposto = -1 * x;
  inverso = 1.0 / x;

  printf("Oposto = %d\n", oposto);
  printf("Inverso = %f\n", inverso);





  return 0;
}
