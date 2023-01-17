#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n = 10;
    int i;

    for(i = 1; i <= 10; i++) {
        printf("[for] i = %d\n", i);
    }

    i = 1;

    while( i <= 10 ) {
        printf("[while] i = %d\n", i);
        i++;
    }

    i = 1;

    do {
        printf("[do-while] i = %d\n", i);
    } while( i <= 10 );





    return 0;
}