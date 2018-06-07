#include <stdio.h>

int vogais(char texto[]) {
  int i;
  int v = 0;

  //i = 0;
  //while( texto[i] != '\0' ) {
  for( i = 0; texto[i] != '\0'; i++ ) {
    if ( texto[i] == 'a' ||
        texto[i] == 'A'  ||
        texto[i] == 'E' ||
        texto[i] == 'e'  ||
        texto[i] == 'I' ||
        texto[i] == 'i'  ||
        texto[i] == 'O' ||
        texto[i] == 'o'  ||
        texto[i] == 'U' ||
        texto[i] == 'u') {
      v++;
    }

    //i++;

  }

  return v;

}

int main(int argc, char const *argv[]) {

  char texto[101];
  int v = 0;

  printf("Informe o texto:" );
  scanf("%s", texto); // gets

  v = vogais(texto);

  printf("O texto tem %d vogais!\n", v);







  return 0;
}
