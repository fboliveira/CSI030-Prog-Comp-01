#include <stdio.h>

int main(int argc, char const *argv[]) {

    int contador;



    // Imprimir [1;10]
    contador = 1;

    while (contador <= 10) {
        printf("%d\n", contador);
        // i = i + 1;
        contador++;
    }

    char letra = 'a';
    while (letra <= 'z') {
        printf("%c\t%d\n", letra, letra);
        letra++;
    }
    
    


    return 0;
}