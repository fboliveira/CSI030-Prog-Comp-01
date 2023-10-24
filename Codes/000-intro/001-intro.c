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
    printf("Decimal: %.2f. Numero %d e a letra %c.\n\n", pi, numero, letra);

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite um valor decimal: ");
    scanf("%f", &pi);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    printf("Valores apos a digitacao:\n");
    printf("Numero inteiro: %d\n", numero);
    printf("Numero decimal: %f\n", pi);
    printf("Letra: %c\n", letra);
    printf("Codigo da letra: %d\n", letra);


    return 0;

}