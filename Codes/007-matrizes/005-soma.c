#include <stdio.h>

void lerMatriz(int matriz[3][3]) {
  int i, j;
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("Digite a posicao [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

int somarMatriz(int matriz[3][3]) {
  int soma = 0;
  int i, j;
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      soma = soma + matriz[i][j];
    }
  }

  return soma;

}

int main(int argc, char const *argv[]) {

  int matriz[3][3];
  int soma = 0;

  // Leitura dos valores
  lerMatriz(matriz);

  // Soma
  soma = somarMatriz(matriz);
  printf("A soma e %d\n", soma);







  return 0;
}
