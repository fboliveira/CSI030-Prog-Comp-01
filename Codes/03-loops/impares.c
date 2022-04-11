#include <stdio.h>

int main() {

    int i;

    for(i = 100; i <= 200; i++) {
        if ( i % 2 == 1 ) {
            printf("%d\t", i);
        }
    }    

    printf("\n\n");

    for(i = 101; i <= 200; i+=2) {
        printf("%d\t", i);
    }    


}