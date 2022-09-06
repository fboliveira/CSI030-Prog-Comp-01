#include <stdio.h>
#include <math.h>


int fat(int n) {
  int f = 1;
  // ...

  return f;
}

void imprimir(int n) {
    printf("Numero = %d\n", n);
    return;
}




int main(int argc, char const *argv[]) {

    float serie = 0;
    float termo;
    float fatorial;
    float fat = 1;

    int x;

    int i, f;

    printf("Informe o valor de X: ");
    scanf("%d", &x);

    serie = 1 + x;

    // Calculo da serie: x^i / i!
    for(i = 2; i <= 20; i++) {

        // x^i
        termo = pow(x, i);

        //i!
        fat *= i;

        // fatorial = 1;
        // for(f = 1; f <= i; f++) {
        //     fatorial *= f;
        // }

        termo /= fat;
        serie += termo;

    }


    return 0;
}