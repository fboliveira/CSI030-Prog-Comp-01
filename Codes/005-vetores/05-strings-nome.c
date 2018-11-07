#include <stdio.h>


int main(int argc, char const *argv[]) {

  char nome[51];
  int i, vogais = 0;

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





  return 0;
}
