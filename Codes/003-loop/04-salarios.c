#include <stdio.h>

int main(int argc, char const *argv[]) {

    float soma = 0;
    float salario = 0;
    float media;

    float maior = -999999;
    float menor = 999999;

    int funcionarios = 0;

    while ( salario != -999 ) {

        printf("Digite o salario: ");
        scanf("%f", &salario);

        if ( salario != -999 ) {

            if ( salario > maior ) {
                maior = salario;
            }

            if ( salario < menor ) {
                menor = salario;
            }

            soma += salario;
            funcionarios++;        
        }

    }

    media = soma / funcionarios;

    printf("Funcionarios = %d\n", funcionarios);
    printf("Maior = %.2f\n", maior);
    printf("Menor = %.2f\n", menor);
    printf("Soma = %.2f\n", soma);
    printf("Media = %.2f\n", media);


    return 0;
}