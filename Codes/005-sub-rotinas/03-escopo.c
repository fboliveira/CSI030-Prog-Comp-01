#include <stdio.h>
#include <math.h>

int x = 99; // global
// float PI = 3.14;



int FLAG_USB = 0;


#define VALOR_PI 3.14

float ler_temperatura() {

    while(FLAG_USB == 1) {
        // esperar
    }

    FLAG_USB = 1;
    // processa
    FLAG_USB = 0;

}

float ler_umidade() {

    while(FLAG_USB == 1) {
        // esperar
    }

    FLAG_USB = 1;
    // processa
    FLAG_USB = 0;
}



int main(int argc, char const *argv[]) {

    // int x = 5;
    int y = 0;

    float c = 2 * PI;
    PI = 8;
    float d = 2 * 3.14;
    3.14 = 5.72;

    while(y >= 0) {
        int x = 3;

        if (y > 10) {
            int x = 2;
            printf("X = %d\n", x);
        }

        printf("X = %d\n", x);

    }

    printf("X = %d\n", x);


    return 0;
}