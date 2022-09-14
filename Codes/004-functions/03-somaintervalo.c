#include <stdio.h>

int ehimpar(int);
int somaintervalo(int, int);
int contaimpar(int n1, int n2);


int main(int argc, char const *argv[]) {

    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    // soma = somaintervalo(n1, n2);

    printf("Soma = %d\n", somaintervalo(n1, n2));
    printf("Impares = %d\n", contaimpar(n1, n2));

    return 0;
}

int ehimpar(int n) {
    return ( n % 2 != 0 ); 
}

int contaimpar(int n1, int n2) {
    int i;
    int impar = 0;
    int inicio;
    int fim;

    if (n1 < n2) {
        inicio = n1;
        fim = n2;
    } else {
        inicio = n2;
        fim = n1;
    }

    for(i = inicio; i <= fim; i++) {
        if ( ehimpar(i) ) {
            impar++;
        }
    }    

    return impar;

}



int somaintervalo(int n1, int n2) {

    int soma = 0;
    int i;

    if (n1 < n2) {
        for(i = n1; i <= n2; i++) {
            soma += i;
        }
    } else {
        for (i = n2; i <= n1; i++) {
            soma += i;
        }
    }

    return soma;

}