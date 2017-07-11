#include <stdio.h>

int main(int argc, char const *argv[]) {

  char nome[30];

  printf("Informe seu nome: \n");
  scanf("%[^\n]s", nome); // Leitura de string

  printf("O seu nome e\n");
  printf("%s\n", nome); // Impressao de string

  return 0;
}
