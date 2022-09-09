#include <stdio.h>

int somaintervalo(int n1, int n2) {

    int soma = 0;
    int i;

    if (n1 < n2) {
        for(i = n1; i <= n2; i++) {
            soma += i;
        }
    } else {
        for (i = n2; i <= n1; i++) {
            soma += i;
        }
    }

    return soma;

}


int main(int argc, char const *argv[]) {

    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    // soma = somaintervalo(n1, n2);

    printf("Soma = %d\n", somaintervalo(n1, n2));

    return 0;
}