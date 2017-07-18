#include <stdio.h>

int main(int argc, char const *argv[]) {


  char nome[31];
  printf("Informe seu nome\n");
  gets(nome);

  printf("O seu nome e: ");
  puts(nome);

  return 0;
}
