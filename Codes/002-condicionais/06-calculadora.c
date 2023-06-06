#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x, y;
    char operacao;
    int resultado;

    printf("Digite o calculo: ");
    scanf("%d", &x);
    scanf(" %c", &operacao);
    scanf("%d", &y);

    switch (operacao) {
    case '+':
        resultado = x + y;

        break;
    
    default:
        break;
    }

    printf("Resultado %d %c %d = %d\n", 
        x, operacao, y, resultado);

    return 0;
}