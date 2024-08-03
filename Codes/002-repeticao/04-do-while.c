#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int i = 1;
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    do {
        printf("%d\n", i);
        i++;
    } while( i <= n);


    printf("Fim do programa.\n");


    return 0;
}