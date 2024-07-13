#include <stdio.h>

int main() {

    float altura;
    int idade;


    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Idade....: \t%d\n", idade);
    printf("Altura...: \t%.2f\n", altura);

    printf("A sua idade e %d anos\n e a sua altura e %.1f metros.\n", idade, altura);

    return 0;
}