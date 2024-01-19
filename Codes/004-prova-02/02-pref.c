#include <stdio.h>

int main(int argc, char const *argv[]) {

    float salario, media_salario, soma_salarios = 0, media_filhos, menor_salario = 99999999, percentual;

    int soma_filhos = 0, filhos, habitantes = 0, sal_ate_valor = 0;

    do {

        printf("Salario: ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Filhos: ");
        scanf("%d", &filhos);

        habitantes++;
        soma_salarios += salario;
        soma_filhos += filhos;

        if (salario < menor_salario) {
            menor_salario = salario;
        }

        if (salario < 800) {
            sal_ate_valor++;
        }

    } while( salario > 0 );

    media_salario = soma_salarios / habitantes;

    media_filhos = (float)soma_filhos / habitantes;

    percentual = ((float)sal_ate_valor / habitantes) * 100.0;

    printf("Media de salarios = %.2f\n", media_salario);
    printf("Media filhos = %.2f\n", media_filhos);
    printf("Menor salario = %.2f\n", menor_salario);
    printf("Percentual = %.2f\n", percentual);

    return 0;
}