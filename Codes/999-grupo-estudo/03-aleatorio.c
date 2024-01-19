#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max) {
    return rand() % (max + 1 - min) + min;
}

int main(int argc, char const *argv[]) {

    srand(time(NULL));

    int n;
    int i;
    int num;
    printf("Quantidade: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        num = aleatorio(10, 100);
        printf("%d\n", num);
    }

    return 0;
}