#include <stdio.h>

int main(int argc, char const *argv[]) {

    int discentes = 3;
    int i, j;

    float notas[discentes][2];
    float medias[discentes];
    float soma;

    // Leitura das notas:
    printf("Digite as notas dos discentes: \n");    
    for(i = 0; i < discentes; i++) {
        printf("Discente: %d\n", i + 1);
        for(j = 0; j < 2; j++) {
            printf("Nota: %d = ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calculo da media:
    for(i = 0; i < discentes; i++) {
        soma = 0;
        for(j = 0; j < 2; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / 2;
    }

    // Impressao do resultado:
    for(i = 0; i < discentes; i++) {
        printf("Discente: %d\n", i + 1);
        for(j = 0; j < 2; j++) {    
            printf("\tNota: %d = %.2f\n", j + 1, notas[i][j]);
        }
        printf("\tMedia = %.2f\n", medias[i]);
    }

    return 0;
}