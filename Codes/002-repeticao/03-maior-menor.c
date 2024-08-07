#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int n;
    int num;
    int i = 1;

    int maior = -999999; 
    int menor =  999999;
    int soma;
    float media;

    soma = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }        
        
        if (num < menor) {
            menor = num;
        }

        soma += num;
        i++;
    }

    media = (float)soma / n;

    printf("Maior numero = %d\n", maior);
    printf("Menor numero = %d\n", menor);
    printf("Soma numero = %d\n", soma);
    printf("Media numero = %.2f\n", media);

    return 0;
}