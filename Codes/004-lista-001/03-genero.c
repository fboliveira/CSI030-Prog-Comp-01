#include <stdio.h>

int main(int argc, char const *argv[]) {

    int masculino, feminino, naobinario, outros;
    int n, i;

    masculino = 0;
    feminino = 0;
    naobinario = 0;
    outros = 0;

    char genero;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);

    for(i = 1; i<= n; i++) {
        printf("Digite um genero: ");
        scanf("%c", &genero);

        if (genero == 'M' || genero == 'm' ) {
            masculino++;
        }

        switch (genero)
        {
        case 'M':
        case 'm':
            masculino++;
            break;
        case 'F':
            feminino++;
            break;
        case 'N':
            naobinario++;
            break;
        
        default:
            outros++;
            break;
        }
    }


    return 0;
}