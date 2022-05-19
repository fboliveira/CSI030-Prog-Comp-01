#include <stdio.h>

typedef int inteiro;
typedef unsigned long long int ullint;

ullint fatorial(inteiro n) {

    ullint fat = 1;
    int i;

    if (n < 0) {
        printf("Impossivel calcular. Utilize apenas numeros maiores ou iguais a zero.\n");
        return -1;
    }

    for(i = 2; i <= n; i++) {
        fat = fat * i;
    }

    return fat;

}

int main() {

    int x;
    unsigned long long int fat;
    printf("Digite um numero: ");
    scanf("%d", &x);

    fat = fatorial(x);

    if ( fat > 0 ) {
        printf("Fatorial = %llu\n", fat);
    }


}