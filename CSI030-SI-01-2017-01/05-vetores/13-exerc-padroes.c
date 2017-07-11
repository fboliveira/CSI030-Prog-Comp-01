#include <stdio.h>

int padroes(char frase[], char padrao[]) {
  int i;
  int n = 0;

  for(i = 0; frase[i+2] != '\0'; ++i) {
    if (frase[i] == padrao[0] &&
        frase[i+1] == padrao[1] &&
        frase[i+2] == padrao[2]) {
          n++;
        }
  }

  return n;

}

int main(int argc, char const *argv[]) {

  char frase[101];
  char padrao[4];
  int sub;

  printf("Informe a palavra/frase\n");
  gets(frase);

  printf("Informe o padrao a ser encontrado\n");
  gets(padrao);

  sub = padroes(frase, padrao);
  printf("O padrao foi encontrado %d vezes\n", sub);

  return 0;
}
