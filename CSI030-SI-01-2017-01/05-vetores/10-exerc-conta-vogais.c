#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, vogais = 0;
  char nome[31];
  printf("Informe o seu nome: ");
  gets(nome);

  for(i = 0; nome[i] != '\0'; i++) {
    if (nome[i] == 'a' || nome[i] == 'A' ||
        nome[i] == 'e' || nome[i] == 'E' ||
        nome[i] == 'i' || nome[i] == 'I' ||
        nome[i] == 'o' || nome[i] == 'O' ||
        nome[i] == 'u' || nome[i] == 'U') {
          vogais++;
        }

  }

  printf("O texto tem %d vogais.\n", vogais);






  return 0;
}
