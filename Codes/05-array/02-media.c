#include <stdio.h>

void leitura(int dados[], int quantidade) {
    int i ;
    for(i = 0; i < quantidade; i++) {
        printf("Digite a posicao %d\n", i+1);
        scanf("%d", &dados[i]);
    }

}

float calcular_media(int dados[], int quantidade) {
    float media;
    int soma = 0, i;

    for(i = 0; i < quantidade; i++) {
        soma = soma + dados[i];
    }

    media = (float)soma / quantidade;
    return media;

}

void imprimir_abaixo_media(int dados[], int quantidade, float media) {
    int i;

    printf("Elementos abaixo da media:\n");
    for(i = 0 ; i < quantidade; i++) {
        if ( dados[i] < media ) {
            printf("%d\n", dados[i]);
        }
    }

}

int main(int argc, char const *argv[]) {

    int n;
    float media;

    printf("Digite a quantidade: ");
    scanf("%d", &n);

    int vetor[n];
    leitura(vetor, n);

    media = calcular_media(vetor, n);
    imprimir_abaixo_media(dados, n, media);

    return 0;
}