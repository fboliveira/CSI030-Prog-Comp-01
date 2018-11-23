#include <stdio.h>

int somar(int m[5][5]) {

  int i, j;
  int s = 0;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      s = s + m[i][j];
    }
  }

  return s;

}

void imprimirDiagonalPrincipal(int m[5][5]) {
  int i, j;

  // On2
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (i == j) {
        printf("%d\n", m[i][j]);
      }
    }
  }

  //On
  // for(i = 0; i < 5; i++) {
  //     printf("%d\n", m[i][i]);
  // }

}

void imprimirDiagonalSecundaria(int m[5][5]) {
  int i, j;

  // On2
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if (i + j == 4) {
        printf("%d\n", m[i][j]);
      }
    }
  }

  // On
  j = 4;
  for(i = 0; i < 5; i++) {
      printf("%d\n", m[i][j]);
      j--;
  }
}

int main(int argc, char const *argv[]) {

  int m[5][5];
  int i, j, k = 0, s;
  float media;

  // Definicao dos valores da matriz
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      m[i][j] = k++;
    }
  }

  // Imprimir a matriz original
  printf("Matriz original:\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }

  // Imprimir a matriz transposta
  printf("Matriz transposta:\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("%d\t", m[j][i]);
    }
    printf("\n");
  }

  printf("Diagonal principal\n");
  imprimirDiagonalPrincipal(m);
  printf("Diagonal secundaria\n");
  imprimirDiagonalSecundaria(m);

  s = somar(m);
  media = (float)s / (5 * 5);
  printf("Soma = %d\n", s);
  printf("Media = %.2f\n", media);






  return 0;
}
