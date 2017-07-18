#include <stdio.h>

int substituir(char nome[]) {

  int i;
  int letras = 0;

  for(i = 0; nome[i] != '\0'; i++) {
    if (nome[i] == 'a') {
      nome[i] = 'b';
      letras++;
    }
  }

  printf("Novo nome: %s", nome);
  return letras;

}


int main(int argc, char const *argv[]) {

  char nome[101];
  int sub;
  printf("Informe o nome/palavra\n");
  gets(nome);

  sub = substituir(nome);
  printf("\nForam realizadas %d substituicoes\n", sub);

  return 0;
}
