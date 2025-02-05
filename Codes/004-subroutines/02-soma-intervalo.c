#include <stdio.h>

int somaintervalo(int n1, int n2) {

    int i;
    int soma = 0;
    int menor;
    int maior;

    if (n1 < n2) {
        menor = n1;
        maior = n2;
    } else {
        menor = n2;
        maior = n1;
    }

    for(i = menor; i <= maior; i++) {
        soma = soma + i;
    }

    return soma;

}

int main(int argc, char const *argv[]) {

    int n1, n2, soma;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    soma = somaintervalo(n1, n2);

    printf("Soma = %d\n", soma);
    

    return 0;
}