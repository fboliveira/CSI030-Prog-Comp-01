#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i;
    int n;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    i = n;

    while(i >= 1) { // do 
        // fatorial *= i;
        fatorial = fatorial * i;
        i--; // i = i - 1;
    }

    printf("Fatorial de %d e %d\n", n, fatorial);

    return 0;
}