#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    float salario;
    int n = 0;

    float menor, maior, media;
    float soma = 0;

    menor = 99999999;
    maior = -99999999;

    do {

        printf("Digite um salario: ");
        scanf("%f", &salario);

        // if (salario == -999) {
        //     break;
        // }

        if (salario != -999) {
            n++;
            soma += salario;

            if (salario < menor) {
                menor = salario;
            } 
            
            if (salario > maior) {
                maior = salario;
            }
        }

    }while (salario != -999);

    if (n > 0) {

        media = soma  / n;

        printf("Quantidade: %d\n", n);
        printf("Menor salario: %.2f\n", menor);
        printf("Maior salario: %.2f\n", maior);
        printf("Soma dos salarios: %.2f\n", soma);
        printf("Media dos salarios: %.2f\n", media);

    }



    return 0;
}