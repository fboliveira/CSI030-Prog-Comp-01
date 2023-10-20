#include <stdio.h>

int main() {

    // Declaracao das variaveis
    // tipo nome <- identificador
    int numero; // primeiro declarar.
    numero = 5; // depois usar.
    // numero <- 5; variavel "recebe" valor.
    char letra = 'A';
    float pi = 3.14;


    printf("Ola, \tmundo!\n");
    printf("Eu\tsou\t\to\tFernando.\n");
    printf("Decimal: %f. O numero %d e o valor  inicial.\n\n", pi, numero);

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    scanf("%f", &pi);




    return 0;

}