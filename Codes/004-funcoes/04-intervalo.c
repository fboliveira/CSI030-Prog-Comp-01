#include <stdio.h>

int soma_intervalo(int n1, int n2);

int soma_intervalo(int n1, int n2) {

    int menor, maior, i, soma = 0;

    if (n1 > n2) {
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
    }

    for( i = menor; i <= maior; i++) {
        soma = soma + i;
    }

    return soma;

}


int main(int argc, char const *argv[]) {

    // intervalo
    // [n1, n2];
    // [n2, n1];
    int n1, n2, resultado_soma, resultado_pares;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    // funcao: somar todos os numeros no intervalo
    resultado_soma = soma_intervalo(n1, n2);
    printf("Soma do intervalo = %d\n", resultado_soma);

    // [3, 6];
    // [6, 3];
    // funcao: contar numeros pares no intervalo


    return 0;
}