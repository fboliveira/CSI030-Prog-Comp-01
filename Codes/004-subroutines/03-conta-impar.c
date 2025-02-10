#include <stdio.h>

int contaimpar(int n1, int n2) {

    int i, impares, menor, maior;
    impares = 0;

    menor = n1;
    maior = n2;

    if (n1 > n2) {
        menor = n2;
        maior = n1;
    }

    for(i = menor; i <= maior; i++) {
        if ( i % 2 != 0 ) {
            impares++;
        }
    }

    return impares;

}


int main(int argc, char const *argv[]) {

    int n1, n2, impares;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    impares = contaimpar(n1, n2);

    printf("Impares = %d\n", impares);

    return 0;
}