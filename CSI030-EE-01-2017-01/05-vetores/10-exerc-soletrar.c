#include <stdio.h>

void soletrar(char nome[]){

  int i;

  for(i = 0; nome[i] != '\0'; i++) {
    printf("%c", nome[i]);

    if (nome[i + 1] != '\0') {
      printf(" - ");
    }

  }

  printf("\n\n");

}

int main(int argc, char const *argv[]) {

  char nome[101];
  printf("Informe o nome/palavra\n");
  gets(nome);

  soletrar(nome);

  return 0;
}
