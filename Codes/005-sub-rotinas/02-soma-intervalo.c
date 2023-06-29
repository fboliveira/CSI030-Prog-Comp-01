#include <stdio.h>


int soma_intervalo(int x, int y) {

    int i, soma = 0;

    for(i = x; i <= y; i++) {
        soma += i;
    }

    return soma;

}




int main(int argc, char const *argv[]) {

    int n1, n2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    resultado = soma_intervalo(n1, n2);

    printf("Soma [%d; %d] = %d\n", n1, n2, resultado);

    return 0;
}