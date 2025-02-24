#include <stdio.h>

int menor_indice(float v[], int n) {
    int i, j;
    float menor = v[0];
    j = 0;

    for(i = 0; i < n; i++) {
        if (v[i] < menor) {
            menor = v[i];
            j = i;
        }
    }

    return j;
}

int main(int argc, char const *argv[]) {

    int n = 5;
    float valores[n];
    float menor;
    int i, j;

    printf("Digite os valores: \n");
    for(i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Menor
    // menor = valores[0];
    // j = 0;

    // for(i = 0; i < n; i++) {
    //     if (valores[i] < menor) {
    //         menor = valores[i];
    //         j = i;
    //     }
    // }
    j = menor_indice(valores, n);

    printf("Menor valor = %f\n", valores[j]);
    printf("Indice do menor valor: %d\n", j);


    return 0;
}