#include <stdio.h>

#include <math.h>


typedef struct Ponto {
    float x;
    float y;
} Ponto;

float distancia_euclidiana(Ponto p, Ponto q) {
    float distancia;
    float dx, dy;

    dx = powf(p.x - q.x, 2);
    dy = powf(p.y - q.y, 2);

    distancia = sqrt(dx + dy);

    return distancia;

}

int main(int argc, char const *argv[]) {

    Ponto p1, p2;
    float distancia;

    printf("Digite a primeira coordenada: ");
    scanf("%f", &p1.x);
    scanf("%f", &p1.y);

    printf("Digite a segunda coordenada: ");
    scanf("%f", &p2.x);
    scanf("%f", &p2.y);    
    
    distancia = distancia_euclidiana(p1, p2);

    printf("Distancia = %.2f\n", distancia);

    return 0;
}