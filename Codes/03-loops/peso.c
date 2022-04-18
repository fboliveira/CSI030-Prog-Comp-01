#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, idade;
    float peso, soma, media;
    char opcao = 's';

    i = 0;
    soma = 0;

    while (opcao != 'n') {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o peso: ");
        scanf("%f", &peso);

        if (idade >= 20) {
            soma = soma + peso;
            i++;
        }

        printf("Deseja continuar? s ou n: ");
        scanf(" %c", &opcao);

    }

    if ( i > 0 ) {
        media = soma / i;
        printf("Media de pesos: %.2f\n", media);
    } else {
        printf("Media nao definida.\n");
    }

    return 0;
}
