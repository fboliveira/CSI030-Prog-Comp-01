#include <stdio.h>

void soletar(char palavra[]) {
  int i;

  for(i = 0; palavra[i] != '\0'; i++) {
    printf("%c", palavra[i]);
    if (palavra[i+1] != '\0') {
      printf(" - ");
    }
  }

}

int main(int argc, char const *argv[]) {

  char palavra[101];
  printf("Informe a palavra/frase\n");
  gets(palavra);

  soletar(palavra);

  return 0;
}
