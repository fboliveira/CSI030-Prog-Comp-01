#include <stdio.h>


int main(int argc, char const *argv[]) {

  int idade;
  float peso;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  printf("Digite o seu peso: ");
  scanf("%f", &peso);

  // Modo 1
  if ( idade >= 18 && idade <= 70 ) {
    if ( peso >= 50.0 ) {
      printf("Voce pode doar sangue!\n");
    } else {
      printf("Voce nao tem o peso suficiente para doacao de sangue.\n");
    }
  } else {
    printf("Voce nao tem idade suficiente para doacao de sangue.\n");
  }

  // Modo 2
  if ( (idade >= 18 && idade <= 70) && (peso >= 50.0) ) {
    printf("Voce pode doar sangue!\n");
  } else {
    printf("Voce nao pode doar sangue.\n");
  }










  return 0;
}
