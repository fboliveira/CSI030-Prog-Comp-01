#include <stdio.h>
#include <math.h>

typedef struct ponto {
  float x;
  float y;
} Ponto;

float calcularDistancia(Ponto p1, Ponto p2) {
  return ( sqrt( pow( p2.x - p1.x, 2 ) +
                 pow( p2.y - p1.y, 2 )));
}

int main(int argc, char const *argv[]) {

  Ponto p1, p2;

  printf("Informe os pontos: \n");
  scanf("%f", &p1.x);
  scanf("%f", &p1.y);

  scanf("%f", &p2.x);
  scanf("%f", &p2.y);

  printf("A distancia e %.2f\n", calcularDistancia(p1, p2));



  return 0;
}
