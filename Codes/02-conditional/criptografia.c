#include <stdio.h>
#include <math.h>

int main() {

    int codigo = 0, tamanho, tipo;
    int chave;

    printf("Informe os parametros:\n");
    printf("Codigo: ");
    scanf("%d", &codigo);

    printf("Tamanho: ");
    scanf("%d", &tamanho);

    printf("Tipo: ");
    scanf("%d", &tipo);

    // Tipo == 3 E codigo impar:
    if ( tipo == 3 && codigo % 2 != 0 ) {
        chave = pow(codigo, 13) + 23 * tamanho + 257;
    } else if ( tipo == 5 && codigo % 2 == 0 ) {
        chave = 19 * pow(codigo, 47) + (tamanho - 179);
    } else {
        chave = pow(codigo + tamanho, 29) + 17 * codigo + (tamanho - 127) + 1;
    }

    printf("Chave = %d\n", chave);

}