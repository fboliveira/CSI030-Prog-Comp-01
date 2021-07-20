#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, quantidadeDeDisciplinas;

    for(i = 0; i < 45; i++) {
        // Codigo:
        printf("Informe a quantidade de disciplinas: ");
        scanf("%d", &quantidadeDeDisciplinas);

        float notas[quantidadeDeDisciplinas];

        // Instrucao de repeticao - ler as notas das disciplinas
        for(j = 0; j < quantidadeDeDisciplinas; j++) {
            printf("Nota %d", j + 1);
            scanf("%f", notas[j]);
        }

    }

    return 0;
}
