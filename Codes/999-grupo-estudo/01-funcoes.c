#include <stdio.h>

void imprimir(int valor);
int calcular(int x, int y);

int main(int argc, char const *argv[]) {

    int a, b, res;

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);

    res = calcular(a, b);
    imprimir(res);

    return 0;
}

int calcular(int x, int y) {
    int menor = x < y ? x : y;
    int maior = x < y ? y : x;

    int soma = 0;
    int i;

    for( i = menor; i <= maior; i++) {
        soma += i;
    }
    
    return soma;
}

void imprimir(int valor) {
    printf("Valor = %d\n", valor);
}
