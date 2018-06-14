#include <stdio.h>

int main(int argc, char const *argv[]) {

  int matriz[5][7];
  int valor = 0;

  int i, j;

  // Para cada uma das linhas
  for(i = 0; i < 5; i++) {
      // Para cada uma das colunas
      for(j = 0; j < 7; j++) {
        // Posicao [linha][coluna]
        // scanf("%d", &matriz[i][j]); <- leitura
        matriz[i][j] = valor;
        valor++;
      }
  }

  // Impressao
  // Para cada uma das linhas
  for(i = 0; i < 5; i++) {
      // Para cada uma das colunas
      for(j = 0; j < 7; j++) {
        printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
      }
  }

  // Para cada uma das linhas
  for(i = 0; i < 5; i++) {
      // Para cada uma das colunas
      for(j = 0; j < 7; j++) {
        printf("%d\t", matriz[i][j]);
      }
      printf("\n");
  }




  return 0;
}
