#include <stdio.h>

int main(int argc, char const *argv[]) {

    int idade, meses, dias, horas, minutos;
    unsigned int segundos;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    meses = idade * 12;
    // dias = idade * 365;
    dias = meses * 30;
    horas = dias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;



    printf("Idade em meses = %d\n", meses);
    printf("Idade em dias = %d\n", dias);
    printf("Idade em horas = %d\n", horas);
    printf("Idade em minutos = %d\n", minutos);
    printf("Idade em segundos = %u\n", segundos);

    return 0;
}