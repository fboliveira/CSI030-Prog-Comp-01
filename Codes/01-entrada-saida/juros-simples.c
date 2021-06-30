#include <stdio.h>

int main(int argc, char const *argv[])
{
    // M = C * (1 + i * t)
    float montante, capital, juros;
    int tempo;

    // mensagens ...
    // leitura das variaveis
    scanf("%f", &capital);
    scanf("%f", &juros);
    scanf("%d", &tempo);

    juros = juros / 100.0;

    montante = capital * (1 + juros * tempo);

    printf("Montante = %.2f", montante);

    return 0;
}
