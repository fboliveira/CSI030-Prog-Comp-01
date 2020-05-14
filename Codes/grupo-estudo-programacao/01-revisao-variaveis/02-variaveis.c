// Definicao das bibliotecas
#include <stdio.h>

// Funcao principal - daqui o computador comeca a executar o programa:
int main() {

    // tipo nome
    // Idade da pessoa
    int idade; // lixo na memoria
    // Idade em meses
    int meses;
    // Altura
    float altura;
    // Primeira letra do nome
    char letra;

    int dias, horas, minutos, segundos;

    // Entrada pelo teclado:
    scanf("%d", &idade);

    // Calcula a idade em meses
    meses = idade * 12;

    // A idade da pessoa em meses:
    printf("Idade em meses: %d\n", meses);

    // Calcular a idade:
    // - em dias;
    dias = meses * 30;
    // - em horas;
    horas = dias * 24;
    // - em minutos
    minutos = horas * 60;
    // - em segundos;
    segundos = minutos * 60; // segundos = horas * 3600;

    // Rever: (Moodle)
    // - notas de aula 01 e 02 
    // - apostila - Capítulo 1 (expressões lógicas e relacionais)

}