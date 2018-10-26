#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int v[n];
  int i;

  for(i = 0; i < n; i++) {
    printf("Digite a posicao %d = ", i);
    scanf("%d", &v[i]);
  }

  for(i = 0; i < n; i++) {
    printf("v[%d] = %d\n", i, v[i]);;
  }









  return 0;
}
