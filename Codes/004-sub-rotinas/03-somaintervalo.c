#include <stdio.h>

int contaimpar(int n1, int n2) {
  int i, conta = 0;
  int menor, maior;

  if ( n1 < n2 ) {
    menor = n1;
    maior = n2;
  } else {
    menor = n2;
    maior = n1;
  }

  for(i = menor; i <= maior; i++) {
    if ( i % 2 != 0 ) {
      conta++;
    }
  }

  return conta;

}


int somaintervalo(int n1, int n2) {
  int i, soma = 0;
  int menor, maior;

  if ( n1 < n2 ) {
    menor = n1;
    maior = n2;
  } else {
    menor = n2;
    maior = n1;
  }

  for(i = menor; i <= maior; i++) {
    soma = soma + i;
  }

  return soma;

}

int main(int argc, char const *argv[]) {

  int n1, n2, resultado, impar;

  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);

  printf("Digite o segundo valor: ");
  scanf("%d", &n2);

  resultado = somaintervalo(n1, n2);
  printf("Soma = %d\n", resultado);

  impar = contaimpar(n1, n2);
  printf("Impares = %d\n", impar);

  return 0;
}
