#include <stdio.h>

int main(int argc, char const *argv[]) {

  int idade;
  int dias;
  int horas;

  // Ler a idade
  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  // Calcular a quantidade de dias
  dias = idade * 365;

  // Calcular a quantidade em horas
  horas = dias * 24;

  // Imprimir o resultado
  printf("A quantidade em dias e: %d e em horas e %d\n\n", dias, horas);
  //printf("A quantidade em horas e: %d\n\n", horas);











  return 0;
}
