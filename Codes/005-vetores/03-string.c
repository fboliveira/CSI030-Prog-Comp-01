#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  int i, tamanho;
  char nome[41];

  printf("Digite o nome: ");
  scanf("%[^\n]s", nome);

  tamanho = 0;

  for(i = 0; nome[i] != '\0'; i++) {
    tamanho++;
  }


  // tamanho = 0;
  // while( nome[tamanho] != '\0' ) {
  //   tamanho++;
  // }

  // tamanho = strlen(nome);


  for(i = tamanho - 1; i >= 0; i--) {
    printf("%c", nome[i]);
  }

  printf("\n");




  return 0;
}
