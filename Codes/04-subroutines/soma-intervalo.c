#include <stdio.h>

// Somar o intervalo [a, b]
// Se a > b, inverter: a = b, b = a.
int soma_intervalo(int a, int b) {

    int menor, maior, soma, i;

    soma = 0;

    if (b > a) {
        menor = a;
        maior = b;
    } else {
        menor = b;
        maior = a;
    }

    for(i = menor; i <= maior; i++) {
        soma = soma + i;
    }

    return soma;

}

int main() {

    int x, y, soma;

    printf("Digite os numeros para soma do intervalo:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = soma_intervalo(x, y);

    printf("Soma = %d\n", soma);

}