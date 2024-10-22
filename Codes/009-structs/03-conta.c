#include <stdio.h>
#include <stdlib.h>



typedef struct CB {
    int numero;
    float saldo;
} Conta;

void calcular_soma_media(Conta *contas, int n, float *soma, float *media) {

    *soma = 0;

    for(int i = 0; i < n; i++) {
        *soma += contas[i].saldo;
    }

    *media = (*soma / n);    

}


float calcular_media_saldo(Conta *contas, int n) {

    float soma = 0;

    for(int i = 0; i < n; i++) {
        soma += contas[i].saldo;
    }

    return (soma / n);
    
}

void depositar(Conta *cliente, float valor) {
    // (*cliente).saldo += valor;
    cliente->saldo += valor;
}


void imprimir_contas(Conta *contas, int n) {

    printf("\nContas registradas: \n");

    for(int i = 0; i < n; i++) {
        printf("Conta: %d\n", i + 1);
        printf("Numero: %d\n", contas[i].numero);

        printf("Saldo: %.2f\n\n", contas[i].saldo);
    }

}

int main(int argc, char const *argv[]) {

    int n;
    float soma, media;

    printf("Digite a quantidade de clientes:");
    scanf("%d", &n);

    // Conta contas[n]; // estatica
    Conta *contas = NULL;
    contas = (Conta *)malloc( n * sizeof(Conta) );

    if (contas == NULL) {
        printf("Nao existe memoria para alocacao.\n");
        return -1;
    }

    printf("Digite os dados das contas: \n");
    for(int i = 0; i < n; i++) {
        printf("Conta: %d\n", i + 1);
        printf("Numero: ");
        scanf("%d", &contas[i].numero);

        printf("Saldo: ");
        scanf("%f", &contas[i].saldo);
    }

    imprimir_contas(contas, n);

    // media = calcular_media_saldo(contas, n);

    calcular_soma_media(contas, n, &soma, &media);

    printf("Soma dos saldos: %.2f\n", soma);
    printf("Media dos saldos: %.2f\n", media);


    Conta *cliente = &contas[0];

    depositar(cliente, 10);
    depositar(&contas[1], 30);

    imprimir_contas(contas, n);


    Conta nubank;
    nubank.numero = 10;

    depositar(&nubank, 250);

    free(contas);

    return 0;
}