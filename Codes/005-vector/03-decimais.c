#include <stdio.h>

void ler_vetor(float vetor[], int n) {
    int i;

    printf("Digite os valores: ");
    for(i = 0; i < n; i++) {
        printf("%d: ", i);
        scanf("%f", &vetor[i]);
    }
}

void imprimir_vetor(float vetor[], int n) {
    int i;

    printf("Valores atuais: ");
    for(i = 0; i < n; i++) {
        printf("%d = %.2f\n", i, vetor[i]);
    }
}

float menor_valor(float vetor[], int n) {

    int i;
    float menor = vetor[0];

    for(i = 0 ; i < n; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    return menor;

}

float calcular_soma(float vetor[], int n) {

    int i;
    float soma = 0;

    for(i = 0 ; i < n; i++) {
        soma += vetor[i];
    }

    return soma;

}

void escalar_valores(float vetor[], 
    float resultado[], int n, float soma) {

    int i;
    
    for(i = 0 ; i < n; i++) {
        resultado[i] = vetor[i] / soma;
    }        

}

int main(int argc, char const *argv[]) {

    int n;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    float numeros[n];
    float escala[n];
    float menor, soma;

    ler_vetor(numeros, n);
    imprimir_vetor(numeros, n);

    menor = menor_valor(numeros, n);
    printf("Menor = %.2f\n", menor);

    soma = calcular_soma(numeros, n);
    printf("Soma = %.2f\n", soma);
    
    escalar_valores(numeros, escala, n, soma);
    
    imprimir_vetor(escala, n);
    
    soma = calcular_soma(escala, n);
    printf("Soma = %.2f\n", soma);

    return 0;
}