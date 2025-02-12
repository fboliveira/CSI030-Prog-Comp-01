#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, n = 5;
    int numeros[n];
    int soma = 0;
    float media;

    printf("Digite os valores: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }    
    
    for(i = 0; i < n; i++) {
        soma += numeros[i];
    }

    media = (float)soma / n;

    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}