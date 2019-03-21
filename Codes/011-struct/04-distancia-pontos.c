#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct Ponto {
  float x;
  float y;
} Ponto;

int main(int argc, char const *argv[]) {

  Ponto p1, p2;

  // Ponto *q;
  // q = (Ponto *) malloc (sizeof(Ponto));
  //
  // (*q).x = 4;
  // q->x = 4;

  float distancia;

  printf("Digite o primeiro ponto (x, y):");
  scanf("%f", &p1.x);
  scanf("%f", &p1.y);

  printf("Digite o segundo ponto (x, y):");
  scanf("%f", &p2.x);
  scanf("%f", &p2.y);

  distancia = sqrt(pow(p1.x - p2.x, 2) +
                  pow(p1.y - p2.y, 2));
  printf("Distancia = %.2f\n", distancia);

  return 0;
}
