#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void eh_multiplo(int a, int b, int *resp){
    if ( a % b == 0 ) {
        *resp = 1;
    } else {
        *resp = 0;
    }
}

int main()
{
    int x, n, i;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int *vet;
    int resp;
    
    srand(time(NULL));
    vet = malloc(n * sizeof(int));

    if(vet){
        for(i = 0; i < n; i++){
            *(vet + i) = rand() % 20;
        }

        for(i = 0; i < n; i++){
            printf("%d ", *(vet + i));
        }
        printf("\n");

        for(i = 0; i < n; i++){
            eh_multiplo(vet[i], x, &resp);
            printf("%d = ", *(vet + i));
            if (resp == 1) {
                printf("eh multiplo de %d\n", x);
            } else {
                printf("nao eh multiplo de %d\n", x);
            }
            printf("\n");
        }

        free(vet);

    }
    
    
    return 0;
}