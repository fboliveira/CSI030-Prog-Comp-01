#include <stdio.h>

int main(int argc, char const *argv[]) {

  char nome[31];

  printf("Informe o seu nome: ");
  scanf("%[^\n]s", nome);

  printf("Seja bem-vindo(a) %s!\n", nome);

  return 0;
}
