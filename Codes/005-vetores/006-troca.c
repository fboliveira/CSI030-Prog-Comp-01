#include <stdio.h>

int substituir(char texto[]) {

  int i, a = 0;

  for(i = 0; texto[i] != '\0'; i++) {
    if ( texto[i] == 'a' ) {
      a++;
      texto[i] = 'b';
    }
  }

  return a;

}


int main(int argc, char const *argv[]) {

  char texto[101];
  int a;

  printf("Informe o texto: ");
  scanf("%s", texto);

  a = substituir(texto);

  printf("Letras A substituidas: %d\n", a);
  printf("Texto final: %s\n", texto);



  return 0;
}
