#include <stdio.h>

int substituir(char frase[]) {
  int i;
  int letras=0;

  for(i = 0; frase[i] != '\0'; ++i) {
    if (frase[i] == 'a') {
      frase[i] = 'b';
      letras++;
    }
  }
  printf("A frase modificado: \n");
  puts(frase);

  return letras;
}

int main(int argc, char const *argv[]) {

  char frase[101];
  int sub;

  printf("Informe a palavra/frase\n");
  gets(frase);

  sub = substituir(frase);
  printf("Foram substituidas %d letras\n", sub);

  return 0;
}
