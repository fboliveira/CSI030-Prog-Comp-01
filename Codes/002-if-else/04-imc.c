#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    float peso, altura, imc, p1, p2, quad_altura;

    printf("Informe o peso: ");
    scanf("%f", &peso);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    quad_altura = pow(altura, 2);

    imc = peso / quad_altura;

    printf("IMC = %.2f\tClassificacao: ", imc);
    if (imc < 18.5)
    {
        printf("Subnutricao\n");
    }
    else if (imc >= 18.5 && imc <= 24.99)
    {
        printf("Peso saudavel\n");
    }
    else if (imc >= 25.0 && imc <= 29.99)
    {
        printf("Sobrepeso\n");
    }
    else if (imc >= 30.0 && imc <= 34.99)
    {
        printf("Obesidade grau 1\n");
    }
    else if (imc >= 35.0 && imc <= 39.99)
    {
        printf("Obesidade grau 2\n");
    }
    else
    {
        printf("Obesidade grau 3\n");
    }

    p1 = 18.5 * quad_altura;
    p2 = 24.99 * quad_altura;

    printf("A faixa de peso ideal eh entre [%.2f] e [%.2f]\n", p1, p2);

    return 0;
}