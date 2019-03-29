#include <stdio.h>

int main(int argc, char const *argv[]) {


  // Declaracao das variaveis
  // Valor da idade em anos - entrada
  int anos;
  // Valor da idade em meses
  int meses;

  int dias, horas, minutos, segundos;

  // Ler a idade da pessoa
  printf("Digite a idade em anos: ");
  scanf("%d", &anos);

  // Calculo: transforma o valor em anos para meses
  meses = anos * 12;
  dias = meses * 30;
  horas = dias * 24;
  minutos = horas * 60;
  segundos = minutos * 60;

  // Apresentar o resultado
  printf("Idade em meses: %d\n", meses);
  printf("Idade em dias: %d\n", dias);
  printf("Idade em horas: %d\n", horas);
  printf("Idade em minutos: %d\n", minutos);
  printf("Idade em segundos: %d\n", segundos);

  return 0;
}
