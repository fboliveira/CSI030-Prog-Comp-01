#include <stdio.h>

// Multiplicar o intervalo [a, b]
// Se a > b, inverter: a = b, b = a.
int multiplica_intervalo(int a, int b) {

    int menor, maior, multiplicacao, i;

    multiplicacao = 1;

    if (b > a) {
        menor = a;
        maior = b;
    } else {
        menor = b;
        maior = a;
    }

    for(i = menor; i <= maior; i++) {
        if (i != 0) {
           multiplicacao = multiplicacao * i;
        }
        continue;
    }

    return multiplicacao;

}

int main() {

    int x, y, multiplicacao;

    printf("Digite os numeros para multiplicacao do intervalo:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    multiplicacao = multiplica_intervalo(x, y);

    printf("Multiplicacao = %d\n", multiplicacao);

}