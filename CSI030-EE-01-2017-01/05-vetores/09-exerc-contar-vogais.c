#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, vogais = 0;
  char texto[51];

  printf("Digite o texto:\n");
  gets(texto);

  for(i = 0; texto[i] != '\0'; i++) {
     if (texto[i] == 'a' || texto[i] == 'A' ||
        texto[i] == 'e' || texto[i] == 'E' ||
        texto[i] == 'i' || texto[i] == 'I' ||
        texto[i] == 'o' || texto[i] == 'O' ||
        texto[i] == 'u' || texto[i] == 'U') {
       vogais++;
     }
  }

  printf("Existem %d vogais no texto!\n", vogais);




  return 0;
}
