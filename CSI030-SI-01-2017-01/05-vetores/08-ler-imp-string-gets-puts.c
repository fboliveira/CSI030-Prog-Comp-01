#include <stdio.h>

int main(int argc, char const *argv[]) {

  char nome[10];

  printf("Informe seu nome: \n");
  gets(nome); // Leitura de string

  printf("O seu nome e\n");
  puts(nome); // Impressao de string

  return 0;
}
