#include <stdio.h>

int main(int argc, char const *argv[]) {

    int idade;
    int idadeEmMeses;
    int idadeEmDias;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Voce tem %d anos.\n", idade);

    idadeEmMeses = idade * 12;

    printf("Idade em meses: %d\n", idadeEmMeses);
    
    idadeEmDias = idadeEmMeses * 30;

    printf("Idade em dias: %d\n", idadeEmDias);

    return 0;
}