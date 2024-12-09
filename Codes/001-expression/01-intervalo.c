#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n >= 30 && n <= 120) {
        printf("Esta no intervalo.\n");
    } else {
        printf("Nao esta no intervalo.\n");
    }


    return 0;
}