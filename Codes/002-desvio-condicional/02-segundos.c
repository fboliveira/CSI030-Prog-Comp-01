#include <stdio.h>

int main(int argc, char const *argv[]) {

    int segundos, horas, minutos;

    printf("Digite o valor em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%dh %dm %ds\n", horas, minutos, segundos);

    return 0;
}