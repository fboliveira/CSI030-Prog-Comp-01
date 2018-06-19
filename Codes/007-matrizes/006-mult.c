#include <stdio.h>

void lerMatriz(float matriz[4][3]) {
  int i, j;
  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      printf("Digite [%d][%d] = ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }
}

void imprimirMatriz(float matriz[4][3]) {

  int i, j;
  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }

}

void multiplicarMatriz(float matriz[4][3]) {

  int i, j;
  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      matriz[i][j] = 3.5 * matriz[i][j];
    }
  }
}

int main(int argc, char const *argv[]) {

  float matriz[4][3];
  lerMatriz(matriz);
  printf("Matriz original: \n");
  imprimirMatriz(matriz);

  printf("\nMatriz apos multiplicacao\n");
  multiplicarMatriz(matriz);
  imprimirMatriz(matriz);

  return 0;
}
