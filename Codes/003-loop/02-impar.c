#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int n;

    n = 100;

    while (n <= 200) {
        if ( n % 2 != 0 ) {
            printf("n = %d\n", n);
        }
        n++;
    } 

    for(n = 100; n <= 200; n++) {
        if ( n % 2 != 0 ) {
            printf("n = %d\n", n);
        }
    }

    for(n = 101; n < 200; n+=2) {
        printf("n = %d\n", n);
    }


    return 0;
}