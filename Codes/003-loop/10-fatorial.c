#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n, i, fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    // for(i = 1; i <= n; i++) {
    //     // fat = fat * i; 
    //     fat *= i;
    // }

    for(i = n; i >= 1; i--) {
        // fat = fat * i; 
        fat *= i;
    }

    printf("Fatorial = %d\n", fat);


    return 0;
}