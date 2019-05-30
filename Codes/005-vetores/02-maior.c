#include <stdio.h>

float media(int vetor[], int tamanho) {
  int i, s;
  float m;

  s = 0;
  for( i = 0; i < tamanho; i++ ) {
    s = s + vetor[i];
  }

  m = (float)s / tamanho;
  return m;

}

int maiorValor(int vetor[], int tamanho){
  int i, m, j;

  m = vetor[0];
  j = 0;


  for(i = 0; i < tamanho; i++){
    if ( vetor[i] > m ) {
      m = vetor[i];
      j = i;
    }
  }

  return m;

}

int main(int argc, char const *argv[]) {

  int i, n, m;
  float med;
  printf("Digite a quantidade: ");
  scanf("%d", &n);

  int v[n];

  printf("Digite os valores:\n");
  for(i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }

  m = maiorValor(v, n);
  printf("Maior valor: %d\n", m);

  med = media(v, n);
  printf("Media = %.2f\n", med);

  return 0;
}
