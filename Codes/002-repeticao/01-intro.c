#include <stdio.h>

int main(int argc, char const *argv[]) {


    // Variavel contadora
    int i = 1; // Inicializacao
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    while (i <= n) { // Teste
        printf("%d\n", i);
        // i = i + 1;
        i++; // Incremento
    }

    printf("Fim do programa.\n");

    return 0;
}