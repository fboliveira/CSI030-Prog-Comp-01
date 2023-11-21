#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Somar os numeros de 1 a N
    int i = 1; // variavel contadora
    int n; // limite superior
    int soma = 0; // variavel acumuladora
    float media;

    printf("Digite um valor: ");
    scanf("%d", &n);

    while( i <= n ) {
        soma = soma + i;
        i++;
    }

    // media = soma / (float)n;
    media = soma;
    media = media / n;


    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    printf("Fim do programa.\n");

    return 0;
}