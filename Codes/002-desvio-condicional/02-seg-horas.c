#include <stdio.h>

int main(int argc, char const *argv[]) {

  int seg;
  int horas;
  int min;

  int sobra;
  printf("Digite o valor em segundos: ");
  scanf("%d", &seg);

  horas = seg / 3600;
  sobra = seg % 3600;

  min = sobra / 60;
  sobra = sobra % 60;

  seg = sobra;

  printf(" %dh %dm %ds\n", horas, min, seg);










  return 0;
}
