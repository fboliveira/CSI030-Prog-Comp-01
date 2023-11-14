#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    float peso, altura, imc;
    float peso_minimo, peso_maximo;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    // imc = peso / pow(altura, 2);
    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Subnutricao\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso saudavel.\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso.\n");
    } else if (imc >= 30 && imc < 35) {
        printf("Obesidade grau 1.\n");
    } else if (imc >= 35 && imc < 40) {
        printf("Obesidade grau 2.\n");
    } else if (imc >= 40) {
        printf("Obesidade grau 3.\n");
    } else {
        printf("Erro na classificacao.\n");
    }

    peso_minimo = 18.5 * pow(altura, 2);
    peso_maximo = 24.9 * pow(altura, 2);

    printf("Faixa de peso ideal:\n");
    printf("Peso minimo = %.2f\n", peso_minimo);
    printf("Peso maximo = %.2f\n", peso_maximo);

    return 0;
}