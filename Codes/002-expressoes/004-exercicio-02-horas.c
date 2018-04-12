#include <stdio.h>

int main(int argc, char const *argv[]) {

  int tempo, horas, minutos, segundos;

  printf("Digite o tempo em segundos: ");
  scanf("%d", &tempo);

  // Horas
  horas = tempo / 3600;
  tempo = tempo % 3600;

  // Minutos
  minutos = tempo / 60;
  tempo = tempo % 60;

  // Segundos
  segundos = tempo;

  printf("O tempo corresponde a %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);






  return 0;
}
