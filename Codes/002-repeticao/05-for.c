#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int i;
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    //for(inicializacao; teste; incremento)
    for(i = 1; i <= n; i++) {

        if (i == 5) {
            printf("-- Suprimido.\n");
            continue;
        }

        printf("%d\n", i);
        // if (i >= 5) {
        //     printf("-- Interrompido.\n");
        //     break;
        // }
    }

    printf("Fim do programa.\n");

    return 0;
}