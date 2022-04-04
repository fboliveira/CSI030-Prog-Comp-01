#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int oposto;
    float inverso;

    printf("Informe um valor:");
    scanf("%d", &x);

    oposto = -x;
    // inverso = x;
    // inverso = 1 / inverso;
    inverso = 1.0 / x;

    printf("Oposto = %d\n", oposto);
    printf("Inverso = %f\n", inverso);



    return 0;
}
