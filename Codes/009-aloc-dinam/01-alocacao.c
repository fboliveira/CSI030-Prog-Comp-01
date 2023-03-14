#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int n, *p, i;

    printf("Defina a quantidade: ");
    scanf("%d", &n);

    p = ( int *) malloc( n * sizeof(int) );

    printf("Digite os valores: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("\nResultado:\n");
    for(i = 0; i < n; i++) {
        printf("[%d] = %d\n", i, p[i]);
    }

    // p = realloc(n * 2 * sizeof(int));

    free(p);

    return 0;
}