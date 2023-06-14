#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i = 1;

    do {
        printf("%d\n", i);
        i++; // i = i + 1;
    } while(i <= 10);

    return 0;
}