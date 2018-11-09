#include <stdio.h>

int substituir(char nome[]) {

  int i, trocas = 0;

  for(i = 0; nome[i] != '\0'; i++) {

    if ( nome[i] == 'a' || nome[i] == 'A' ) {
      nome[i] = '4';
      trocas++;
    } else if ( nome[i] == 'e' || nome[i] == 'E' ) {
      nome[i] = 's';
      trocas++;
    }

  }

  return trocas;

}

void soletrar(char nome[]) {

  int i;

  for(i = 0; nome[i] != '\0'; i++) {
    printf("%c", nome[i]);

    if( nome[i+1] != '\0' ) {
      printf(" - ");
    }

  }

  printf("\n");

}


int main(int argc, char const *argv[]) {

  char nome[51];
  int i, vogais = 0, trocas;

  printf("Digite o seu nome: ");
  scanf("%[^\n]s", nome);
  //gets(nome);

  printf("Seja bem-vindo(a) %s !\n", nome);
  //puts("Seja bem vindo(a) ");
  //puts(nome);
  //puts("!");

  // Contar vogais:
  for(i = 0; nome[i] != '\0'; i++) {

    if ( nome[i] == 'a' ||
         nome[i] == 'e' ||
         nome[i] == 'i' ||
         nome[i] == 'o' ||
         nome[i] == 'u' ){
           vogais++;
         }
  }

  printf("Vogais = %d\n", vogais);

  // Substituicao
  trocas = substituir(nome);
  printf("Nome apos substituicao: %s\n", nome);
  printf("Trocas = %d\n", trocas);

  // soletrar
  soletrar(nome);


  return 0;
}
