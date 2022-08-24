#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    int codigo, tamanho, tipo;
    unsigned long long int chave;

    printf("Informe o codigo: ");
    scanf("%d", &codigo);

    printf("Informe o tamanho da chave: ");
    scanf("%d", &tamanho);

    printf("Informe o tipo: ");
    scanf("%d", &tipo);

    if ( tipo == 3 && codigo % 2 != 0) {
        chave = pow(codigo, 13) + 23 * tamanho + 257;
    } else if( tipo == 5 && codigo % 2 == 0 ) {
        chave = 19 * pow(codigo, 47) + (tamanho - 179);
    } else {
        chave = pow( codigo + tamanho, 29 ) + 17 * codigo + ( tamanho - 127 ) + 1;
    }

    printf("Chave = %llu\n", chave);

    return 0;
}