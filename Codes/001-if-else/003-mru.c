#include <stdio.h>

int main(int argc, char const *argv[]) {

    float distancia, velocidade, tempo;

    printf("Informe a distancia: ");
    scanf("%f", &distancia);

    printf("Informe a velocidade: ");
    scanf("%f", &velocidade);

    printf("Informe o tempo: ");
    scanf("%f", &tempo);

    if (distancia == 0) {
        distancia = velocidade * tempo;
    } else if ( velocidade == 0 ) {
        velocidade = distancia / tempo;
    } else {
        tempo = distancia / velocidade;
    }

    printf("Distancia = %.2f km\n", distancia);
    printf("Velocidade = %.2f km/h\n", velocidade);
    printf("Tempo = %.2f h\n", tempo);


    return 0;
}