#include <stdio.h>

int main(int argc, char const *argv[]) {

    float distancia, velocidade, tempo;

    printf("Informe a distancia: ");
    scanf("%f", &distancia);

    printf("Informe a velocidade: ");
    scanf("%f", &velocidade);

    printf("Informe o tempo: ");
    scanf("%f", &tempo);

    if ( distancia == 0 ) {
        distancia = velocidade * tempo;
        printf("A distancia e: %.3f\n", distancia);
    } else if ( velocidade == 0 ) {
        velocidade = distancia / tempo;
        printf("A velocidade e: %.3f\n", velocidade);
    } else if (tempo == 0) {
        tempo = distancia / velocidade;
        printf("O tempo e %.3f\n", tempo);
    } else {
        printf("Impossivel calcular.\n");
    }

    return 0;
}