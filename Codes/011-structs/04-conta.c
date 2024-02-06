#include <stdio.h>

typedef struct Cnt
{
    int numero;
    int agencia;
    float saldo;

} Conta;


int main(int argc, char const *argv[]) {

    int n, i;

    printf("Digite a quantidade de clientes: ");
    scanf("%d", &n);

    // Conta *cli = (Conta *) malloc(n * sizeof(Conta));
    Conta clientes[n];
    
    printf("Digite os dados dos clientes: \n");
    for(i = 0; i < n; i++) {
        printf("Digite o numero da conta: ");
        scanf("%d", &clientes[i].numero);
        printf("Digite o numero da agencia: ");
        scanf("%d", &clientes[i].agencia);        
        printf("Digite o saldo: ");
        scanf("%f", &clientes[i].saldo);
    }

    printf("Dados dos clientes:\n");

    for(i = 0; i < n; i++) {
        printf("Cliente: %d\n", i);
        printf("\tConta: %d\n", clientes[i].numero);
        printf("\tAgencia: %d\n", clientes[i].agencia);
        printf("\tSaldo: %.2f\n", clientes[i].saldo);
    }

    // free(cli);
    return 0;
}