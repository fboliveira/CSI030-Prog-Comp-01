#include <stdio.h>

int main(int argc, char const *argv[]) {

  int horas, minutos;
  float custo, multa, custoTotal;

  printf("Informe o valor em horas: ");
  scanf("%d", &horas);

  printf("Informe o valor em minutos: ");
  scanf("%d", &minutos);

  custo = horas * 0.75;

  if ( minutos <= 15 ) {
    custo += 0.1;
  } else if ( minutos >= 16 && minutos <= 30 ) {
    custo += 0.25;
  } else if ( minutos >= 31 && minutos <= 45 ) {
    custo += 0.4;
  } else {
    custo += 0.75;
  }

  if ( ( horas == 5 && minutos > 0 ) ||
       ( horas > 5 ) ) {
         multa = custo * 0.1;
       } else {
         multa = 0;
       }

    custoTotal = custo + multa;

    printf("Custo: %.2f\n", custo);
    printf("Multa: %.2f\n", multa);
    printf("Custo total: %.2f\n", custoTotal);







  return 0;
}
