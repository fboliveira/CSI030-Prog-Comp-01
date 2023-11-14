#include <stdio.h>

int main(int argc, char const *argv[]) {

    int segundos, minutos, horas;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    segundos = segundos % 60;

    horas = minutos / 60;
    minutos = minutos % 60;


    printf("%dh %dm %ds\n", horas, minutos, segundos);

    return 0;
}