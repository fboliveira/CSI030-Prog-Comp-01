#include <stdio.h>

// Passagem por referencia
void operar(int *valor) {

    int n = 4;

    *valor = n * (*valor);

}


int main(int argc, char const *argv[]) {

    int n = 5;
    int x = 8;
    float valor = 3.14;

    int *p = NULL;
    float *q = NULL;

    // Nao tentem isso em casa
    // q = valor;

    printf("P aponta para N\n");
    printf("N antes = %d\n", n);
    p = &n;
    *p = 10;
    printf("N depois = %d\n", n);

    printf("P aponta para X\n");
    printf("X antes = %d\n", x);
    p = &x;
    *p = 2 * (*p);
    printf("X depois = %d\n", x);
    
    printf("Chama operar()\n");
    printf("N antes = %d\n", n);
    operar(&n);
    printf("N depois = %d\n", n);



    return 0;
}