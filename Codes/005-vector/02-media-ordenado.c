#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, n = 5;
    int numeros[n];
    int soma = 0;
    int par = 0, impar = 0;
    float media;
    // 0 - sem ordem; 1 - crescente; 2 - decrescente
    int ordem = 0;

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
    
    for(i = 0; i < n; i++) {
        if (numeros[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }    
    
    printf("Pares = %d\n", par);
    printf("Impares = %d\n", impar);

    // Ordem -> crescente
    ordem = 1;
    for(i = 0; i < n - 1; i++) {
        // Identificar se algum elemento falha
        if (numeros[i] > numeros[i + 1]) {
            ordem = 0;
            break;
        }
    }

    // Ordem -> decrescente
    if ( ordem == 0 ) {
        ordem = 2;
        for(i = 0; i < n - 1; i++) {
            // Identificar se algum elemento falha
            if (numeros[i] < numeros[i + 1]) {
                ordem = 0;
                break;
            }
        }        
    }

    if(ordem == 0) {
        printf("Vetor nao ordenado!\n");
    } else if (ordem == 1) {
        printf("Vetor em ordem crescente!\n");
    } else {
        printf("Vetor em ordem decrescente!\n");
    }

    return 0;
}