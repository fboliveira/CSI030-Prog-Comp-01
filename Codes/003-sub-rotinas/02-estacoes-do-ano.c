#include <stdio.h>


int verifica_data(int dia, int mes) {
    // 1 - valida
    // 0 - invalida

    if (dia < 0 || dia > 31) {
        return 0;
    }

    if (mes == 2 && dia >= 30) {
        return 0;
    }

    return 1;
}

void estacao(int dia, int mes) {

    if (verifica_data(dia, mes) == 0) {
        printf("A data e invalida!");
        return;
    }

    // 1 -> verao
    // 2 -> outono
    // 3 -> inverno
    // 4 -> primavera
    int id_estacao = 0;

    if (mes <= 3) {
        id_estacao = 1;

        if (mes == 3 && dia >= 21) {
            id_estacao = 2;
        }

    } else if (mes > 3 && mes <= 6) {
        id_estacao = 2;

        if (mes == 6 && dia >= 21) {
            id_estacao = 3;
        }
    } else if (mes > 6 && mes <= 9) {
        id_estacao = 3;

        if (mes == 9 && dia >= 23) {
            id_estacao = 4;
        }
    } else if (mes > 9 && mes <= 12) {
        id_estacao = 4;

        if (mes == 12 && dia >= 21) {
            id_estacao = 1;
        }
    }

    switch (id_estacao) {
        case 1:
            printf("Verao\n");
            break;

        case 2:
            printf("Outono\n");
            break;

        case 3:
            printf("Inverno\n");
            break;

        case 4:
            printf("Primavera\n");
            break;

        default:
            printf("A data e invalida!\n");
            break;
    }
}

int main(int argc, char const *argv[]) {
    int dia, mes;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);

    estacao(dia, mes);

    return 0;
}