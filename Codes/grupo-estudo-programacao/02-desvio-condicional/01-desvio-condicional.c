// a > b; a < b ; a >= b; a <= b
// AND; OR; NOT

// 

/* Bibliotecas */
#include <stdio.h>

/* Funcao principal */
int main(int argc, char const *argv[]) {

  int idade;
  char nacionalidade;

  scanf("%d", &idade);
  scanf(" %c", &nacionalidade);

  //
  // nacionalidade = 'B' (nacionalidade RECEBE 'B')
  // nacionalidade == 'B' (teste de igualdade) -> nacionalidade É IGUAL A 'B' ?

  // Pode retirar CNH?
  // Tem que ser maior que 18 anos
  // E a nacionalidade tem que ser brasileira
  // if-else
  if ( idade >= 18 && nacionalidade == 'B' ) { // idade > 17 // !(idade <= 17)
      printf("CNH permitida.");
  } else {
      printf("CNH nao permitida");
  } 

  // Outro teste - if-else-if

    // if - then - else
    // se (T) entao: faca A;
    // caso contrario: faca B

  if ( idade >= 18 && nacionalidade == 'B' ) {
      printf("CNH permitida.");
  } else if ( idade == 17 && nacionalidade == 'B' ) {
      printf("CNH permitida para o proximo ano.");
  } else {
      printf("CNH nao permitida.")
  } 

  // Teste da idade (somente) ?
  // Teste da nacionalidade
  switch( nacionalidade ) { // int ou char

    case 'B': // brasileira
        printf("CNH permitida.");
        break;

    case 'C': // canadense
        printf("CNH permitida.");
        break;

    default:
        printf("CNH nao permitida");

  }

  if ( nacionalidade == 'B' ) {
      printf("CNH permitida.");
  } else if ( nacionalidade == 'C' ) {
      printf("CNH permitida.");
  } else {
      printf("CNH nao permitida.");
  }

  // Indicacoes para a proxima semana:
  // 
  // Apostila - 2.2.1 e 2.2.2
  //
  // - pag 13: exercicio 9 - doacao de sangue;
  // - pag 14: exercicio 14 - calculo do IMC  

  return 0;

}