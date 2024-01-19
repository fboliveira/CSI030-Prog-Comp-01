#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max) {
    return rand() % (max + 1 - min) + min;
}

int main(int argc, char const *argv[]) {

    srand(time(NULL));

    int n;
    printf("Quantidade: ");
    scanf("%d", &n);
    
    int vetor[n];
    int i;
    int soma = 0;
    int num;
    int menor = 0;
    int maior = 0;
    int igual = 0;
    float media;

    for(i = 0; i < n; i++) {
        num = aleatorio(10, 100);
        vetor[i] = num;
    }
    for(i = 0; i < n; i++) {
        soma += vetor[i];
    }
    
    for(i = 0; i < n; i++) {
        printf("%d\t", vetor[i]);
    }

    printf("\nSoma = %d\n", soma);
    media = (float)soma / n;

    printf("Media = %.2f\n", media);

    for(i = 0; i < n; i++) {
        if (vetor[i] < media) {
            menor++;
        } else if (vetor[i] > media) {
            maior++;
        } else {
            igual++;
        }
    }    

    printf("Abaixo da media = %d\n", menor);
    printf("Igual a media = %d\n", igual);
    printf("Acima da media = %d\n", maior);

    return 0;
}