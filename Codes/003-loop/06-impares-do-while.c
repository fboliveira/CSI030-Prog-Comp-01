#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 101;

    do {
        printf("%d\n", x);
        x+=2;
    } while(x <= 199);

    return 0;
}