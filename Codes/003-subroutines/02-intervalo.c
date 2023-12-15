#include <stdio.h>

// [1..10]
void imprimir_ate_10() {
    int i;

    printf("Numeros de 1 ate 10:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}

// [1..n]
void imprimir_ate_n(int n) {
    int i;

    printf("Numeros de 1 ate %d:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

// [a..b]
void imprimir_intervalo(int a, int b) {
    int i;

    printf("Numeros de %d ate %d:\n", a, b);

    for (i = a; i <= b; i++) {
        printf("%d\n", i);
    }
}

// Soma intervalo [a, b]
int soma_intervalo(int a, int b) {
    int i, soma, menor, maior;
    soma = 0;

    if (a < b) {
        menor = a;
        maior = b;
    } else {
        menor = b;
        maior = a;
    }

    for (i = menor; i <= maior; i++) {
        soma = soma + i;
    }

    return soma;
}

int main(int argc, char const *argv[]) {
    int n;
    int a, b, soma;

    // imprimir_ate_10();
    imprimir_intervalo(1, 10);

    printf("Digite o numero maximo: ");
    scanf("%d", &n);
    // imprimir_ate_n(n);
    imprimir_intervalo(1, n);

    printf("Digite o limite inferior: ");
    scanf("%d", &a);
    printf("Digite o limite superior: ");
    scanf("%d", &b);
    imprimir_intervalo(a, b);

    soma = soma_intervalo(a, b);
    printf("Soma do intervalo: %d\n", soma);

    return 0;
}