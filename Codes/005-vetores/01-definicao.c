#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int v[n];
  int i;

  for(i = 0; i < n; i++) {
    v[i] = pow(i, 2) + 2 * i + 3;
  }

  for(i = 0; i < n; i++) {
    printf("v[%d] = %d\n", i, v[i]);;
  }









  return 0;
}
