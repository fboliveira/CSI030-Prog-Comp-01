#include <stdio.h>

int somaintervalo(int n1, int n2) {

    int soma = 0;
    int i;
    int menor, maior;

    if (n1 < n2) {
        menor = n1;
        maior = n2;
    } else {
        menor = n2;
        maior = n1;
    }

    for(i = menor; i <= maior; i++) {
        soma += i;
    }

    return soma;

}

int main(int argc, char const *argv[]) {

    int n1, n2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    soma = somaintervalo(n1, n2);

    printf("Soma = %d\n", soma);

    return 0;
}