#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio() {
    return rand() % 11;
}

void atribuir_valores_matriz(int matriz[5][5]) {
    int i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = aleatorio();
        }
    }

}

void imprimir_matriz(int matriz[5][5]) {
    int i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

}

int main(int argc, char const *argv[]) {

    int matriz[5][5];
    int linha_menor_soma;
    int coluna_maior_soma;
    int menor_soma, maior_soma;
    int soma_linha[5], soma_coluna[5];
    int i, j;

    srand(time(NULL));

    // Atribuir os valores aleatoriamente
    atribuir_valores_matriz(matriz);
    imprimir_matriz(matriz);

    for(i = 0; i < 5; i++) {
        soma_linha[i] = 0;
        for(j = 0; j < 5; j++) {
            soma_linha[i] += matriz[i][j];        
        }
        printf("Soma linha[%d] = %d\n", i, soma_linha[i]);
    }

    for(j = 0; j < 5; j++) {
        soma_coluna[j] = 0;
        for(i = 0; i < 5; i++) {
            soma_coluna[j] += matriz[i][j];
        }
        printf("Soma coluna[%d] = %d\n", j, soma_coluna[j]);

    }    

    // Linha com a menor soma
    linha_menor_soma = 0;
    menor_soma = soma_linha[0];

    for(i = 1; i < 5; i++) {
        if ( soma_linha[i] < menor_soma ) {
            menor_soma = soma_linha[i];
            linha_menor_soma = i;
        }
    }

    printf("Linha com menor soma = %d\n", linha_menor_soma);


    // Coluna com maior soma
    coluna_maior_soma = 0;
    maior_soma = soma_coluna[0];

    for(i = 1; i < 5; i++) {
        if ( soma_coluna[i] > maior_soma ) {
            maior_soma = soma_coluna[i];
            coluna_maior_soma = i;
        }
    }

    printf("Coluna com maior soma = %d\n", coluna_maior_soma);

    return 0;
}