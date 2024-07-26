#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    float peso, altura, imc, p1, p2;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
   
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    // imc = peso / pow(altura, 2);
    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    // Definir a classificacao:
    printf("Classificacao: ");

    if ( imc < 18.5 ) {
        printf("Subnutricao\n");
    } else if ( imc >= 18.5 && imc < 25 ) {
        printf("Peso saudavel\n");
    } else if ( imc >= 25 && imc < 30 ) {
        printf("Sobrepeso\n");
    } else if ( imc >= 30 && imc < 35 ) {
        printf("Obesidade grau 1\n");
    } else if ( imc >= 35 && imc < 40 ) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    p1 = 18.5 * (altura * altura);
    p2 = 24.9 * (altura * altura);

    printf("Faixa ideal de peso: entre %.2f e %.2f\n", p1, p2);
    
    return 0;
}