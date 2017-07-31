#include <stdio.h>

/*
Pesquisar:
  - quantidade de pares
  - quantidade de ímpares

Calcular:
  - média da diagonal principal
  - média da diagonal secundária
  - transposta
  - inverso dos elementos 
*/

int maiorPar(int matriz[4][4]) {
  int i, j, maior = -9999999;

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if (matriz[i][j] % 2 == 0 && matriz[i][j] > maior) {
        maior = matriz[i][j];
      }
    }
  }
  return maior;
}

int menorImpar(int matriz[4][4]) {
  int i, j, menor = 9999999;

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if (matriz[i][j] % 2 != 0 && matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
    }
  }
  return menor;
}

float calcularMedia(int matriz[4][4]) {

  int i, j;
  float soma = 0;

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      soma += matriz[i][j];
    }
  }

  return (soma / 16.0);

}

int elementoMedio(int matriz[4][4]) {

  int i, j;
  float media = calcularMedia(matriz);

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if ( matriz[i][j] >= media - 1 &&
           matriz[i][j] <= media + 1) {
             return matriz[i][j];
           }
    }
  }

  return -99999;

}
int maiorValor(int matriz[4][4]) {

  int i, j;
  int maior = matriz[0][0];

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      }
    }
  }

  return maior;

}

int menorValor(int matriz[4][4]) {

  int i, j;
  int menor = matriz[0][0];

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
    }
  }

  return menor;

}
int main(int argc, char const *argv[]) {

  int n = 4;
  int matriz[n][n];
  int i, j, maior, menor;

  // Leitura
  printf("Informe os valores:\n");
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  maior = maiorValor(matriz);
  menor = menorValor(matriz);

  printf("Maior = %d\n", maior);
  printf("Menor = %d\n", menor);

  return 0;

}
