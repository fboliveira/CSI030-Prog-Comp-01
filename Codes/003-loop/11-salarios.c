#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    float salario, menor, maior, soma, media;
    int i = 0;

    menor = 999999999;
    maior = -99999999;
    soma = 0;
    salario = 0;

    while (salario != -999) {
        printf("Digite o slario: ");
        scanf("%f", &salario);

        if (salario == -999) {
            break;
        }

        i++;
        soma = soma + salario;

    }



    return 0;
}