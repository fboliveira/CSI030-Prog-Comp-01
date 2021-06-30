// Ler N números e calcular a média:

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, x, n, soma;
    float media;
    
    soma = 0;
    n = 5; // lido pelo teclado

    // for / while / do-while 

    // for(inicializacao; condicao; incremento)
    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }
    
    // inicializacao
    i = 0;
    // while (condicao) {
    while( i < n ) {
        //      ... 
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;        
        //      incremento (opcional)
        i++;
    // }    
    }  

    // inicializacao (opcional)
    i = 0;
    // do {
    do {
        //      ... 
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;        
    //      incremento (opcional)
        i++;
    // } while (condicao);    
    } while ( i < n );


    media = soma / n;

    printf("A media = %.2f", media);

    return 0;
}
