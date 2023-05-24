#include <stdio.h>

int main(int argc, char const *argv[]){

    int valor;
    int notas50, notas10, notas1;
    int restante;

    printf("Digite um valor para calculo das notas: ");
    scanf("%d", &valor);

    notas50 = valor / 50;
    restante = valor % 50;

    notas10 = restante / 10;
    restante = restante % 10;

    notas1 = restante;

    printf("Notas de R$ 50 = %d\n", notas50);
    printf("Notas de R$ 10 = %d\n", notas10);
    printf("Notas de R$ 1 = %d\n", notas1);

    return 0;
}
