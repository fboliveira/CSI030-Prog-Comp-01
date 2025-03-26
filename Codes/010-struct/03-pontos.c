#include <stdio.h>
#include <math.h>

typedef struct Ponto {
    int x;
    int y;
} Ponto;

int main(int argc, char const *argv[]) {

    Ponto p1, p2;
    float distancia;
    float dx, dy;

    printf("Digite os valores: \n");
    printf("Ponto 1:\n");
    printf("X = ");
    scanf("%d", &p1.x);    
    printf("Y = ");
    scanf("%d", &p1.y);    
    
    printf("Ponto 2:\n");
    printf("X = ");
    scanf("%d", &p2.x);    
    printf("Y = ");
    scanf("%d", &p2.y);
    
    dx = powf(p1.x - p2.x, 2);
    dy = powf(p1.y - p2.y, 2);

    distancia = sqrt(dx + dy);

    printf("Distancia = %.2f\n", distancia);

    return 0;
}