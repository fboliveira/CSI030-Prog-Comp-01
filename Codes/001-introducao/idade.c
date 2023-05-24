#include <stdio.h>

int main(int argc, char const *argv[]) {

    int idade, meses, dias, horas, minutos, segundos;
    
    printf("Digite a idade em anos: ");
    scanf("%d", &idade);

    meses = idade * 12;
    dias = meses * 30;
    horas = dias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;


    printf("Idade em anos: %d\n", idade);
    printf("Meses = %d\n", meses);
    printf("Dias = %d\n", dias);
    printf("Horas = %d\n", horas);
    printf("Minutos = %d\n", minutos);
    printf("Segundos %d\n", segundos);

    return 0;
}