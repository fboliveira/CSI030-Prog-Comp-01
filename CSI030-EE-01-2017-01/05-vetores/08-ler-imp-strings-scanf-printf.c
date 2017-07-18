#include <stdio.h>

int main(int argc, char const *argv[]) {

  char nome[31];


  printf("Informe o seu nome\n");
  scanf("%[^\n]s", nome);

  printf("O seu nome e %s\n", nome);








  return 0;
}
