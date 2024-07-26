#include <stdio.h>

int main(int argc, char const *argv[]) {

    float distancia, velocidade, tempo;

    printf("Digite a distancia: ");
    scanf("%f", &distancia);

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    printf("Digite o tempo: ");
    scanf("%f", &tempo);
    
    if (distancia == 0) {
        distancia = velocidade * tempo;
        printf("Distancia = %.2f\n", distancia);
    } else if ( velocidade == 0 ) {
        velocidade = distancia / tempo;
        printf("Velocidade = %.2f\n", velocidade);
    } else if (tempo == 0) {
        tempo = distancia / velocidade;
        printf("Tempo = %.2f\n", tempo);
    } else {
        printf("Uma das tres variaveis precisa ser igual a zero.");
    }

    return 0;
}