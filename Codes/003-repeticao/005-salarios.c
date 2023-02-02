#include <stdio.h>

int main(int argc, char const *argv[]) {

    float salario, soma, maior, menor, media;

    int contador = 0;

    soma = 0;

    salario = 0;
    maior = -99999999; // FLT_MIN
    menor = 99999999; // FLT_MAX

    while( salario != -999 ) {

        printf("Digite o salario: ");
        scanf("%f", &salario);

        if ( salario > 0 ) {

            // if (contador == 0) {
            //     maior = salario;
            //     menor = salario;
            // }    

            if (salario > maior) {
                maior = salario;
            } 
            
            if (salario < menor) {
                menor = salario;
            }

            soma += salario;
            contador++;

        } else {
            printf("Fim da leitura.\n");
        }

    }

    // do {

    // } while(salario != -999);

    if ( contador > 0 ) {
        media = soma / contador;

        printf("Quantidade = %d\n", contador);
        printf("Soma = %.2f\n", soma);
        printf("Media = %.2f\n", media);
        printf("Maior = %.2f\n", maior);
        printf("Menor = %.2f\n", menor);

    } else {
        printf("Nenhum salario foi informado.");
    }

    return 0;
}