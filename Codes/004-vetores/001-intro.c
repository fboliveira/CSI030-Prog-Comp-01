#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numeros[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &numeros[i]);
    }

    printf("Valores digitados: \n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%d\n", i, numeros[i]);
    }

    return 0;
}