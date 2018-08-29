// Definir as bibliotecas
#include <stdio.h>

// Definir a funcao principal - main
int main(int argc, char const *argv[]) {

  // Declarar as variaveis
  // Valor da idade em anos
  int idade;
  // quantidade de meses da idade
  int meses;
  // Resultado da idade em dias
  int dias;
  // Resultado da idade em horas
  int horas;

  // Ler a idade da pessoa
  printf("Digite a sua idade em anos: ");
  scanf("%d", &idade);
  // Ler a quantidade de meses
  printf("Digite a quantidade de meses da sua idade: ");
  scanf("%d", &meses);

  // Operacao - calcular a idade em dias
  dias = idade * 365;
  // Calcular a quantidade de meses em dias
  dias = dias + meses * 30;

  // Calcular a idade em horas (dias)
  horas = dias * 24;

  // Imprimir o Resultado em dias
  printf("A idade em dias e: %d\n", dias);

  // Imprimir o Resultado em horas
  printf("A idade em horas e: %d\n", horas);








  return 0;
}
