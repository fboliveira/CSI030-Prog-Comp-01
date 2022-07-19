#include <stdio.h>

void imprimir(int *vetor, int n) {

    int i;
    int *p = &vetor[0];

    for(i = 0; i < n; i++) {
        // printf("%d\n", vetor[i]);
        printf("%d\n", *p);
        p++;
    }


}


void operar(int *valor, int n) {

    // *valor: RAM [  &H327  ] main(x)
    // n     : RAM [   34    ]

    n+=10;
    *valor = *valor + 5;

}

int main(int argc, char const *argv[]) {

    int x; // RAM: [   12  ]: H327    
    x = 5;
    int y; // RAM: [   24  ]: H198

    // ponteiro, apontador: pointer
    int *p = NULL; // RAM: [   &H198   ]

    int numeros[10];

    // scanf("%d", &x);
    p = &x;

    x++;
    (*p)++; // != p++

    y = 25;
    p = &y;
    
    (*p)--; // != p--

    *p = (*p) * (*p);

    operar(&x, y);

    printf("X = %d\n", x);
    printf("Y = %d\n", y);

    imprimir(numeros, 10);


    return 0;
}