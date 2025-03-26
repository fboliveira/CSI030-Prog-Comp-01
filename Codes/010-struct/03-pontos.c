#include <stdio.h>
#include <math.h>

typedef struct Ponto {
    float x;
    float y;
} Ponto;

int main(int argc, char const *argv[]) {

    Ponto p1, p2;
    float dx, dy, distancia;

    printf("Digite o Ponto 1: \n");
    printf("X = ");
    scanf("%f", &p1.x);
    printf("Y = ");
    scanf("%f", &p1.y);    
    
    printf("Digite o Ponto 2: \n");
    printf("X = ");
    scanf("%f", &p2.x);
    printf("Y = ");
    scanf("%f", &p2.y);
    
    dx = pow(p1.x - p2.x, 2);
    dy = pow(p1.y - p2.y, 2);

    distancia = sqrt(dx + dy);

    printf("Distancia = %.2f\n", distancia);

    return 0;
}