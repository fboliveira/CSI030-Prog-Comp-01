#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int codigo;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 101:
            printf("Vendedor\n");
            break;        
        case 102:
            printf("Atendente\n");
            break;
        
        default:
            printf("Codigo invalido!\n");
            break;
    }


    return 0;
}