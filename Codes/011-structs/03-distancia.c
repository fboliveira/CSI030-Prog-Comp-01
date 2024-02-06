#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct P {

    float x;
    float y;

} Ponto;

int main(int argc, char const *argv[]) {

    int n = 2;
    int i;
    float resultado, px, py;

    Ponto *ponto = (Ponto *) malloc( n * sizeof(Ponto) );

    for(i = 0; i < n; i++) {
        printf("Digite o ponto %d\n", i);
        scanf("%f", &ponto[i].x);
        scanf("%f", &ponto[i].y);
    }

    // D(p0, p1) = sqrt( ( p0_x - p1_x )^2 + ( p0_y - p1_y )^2 )
    px = pow( ponto[0].x - ponto[1].x, 2 );
    py = pow( ponto[0].y - ponto[1].y, 2 );

    resultado = sqrt(px + py);

    printf("Distancia = %.2f\n", resultado);

    free(ponto);

    return 0;
}