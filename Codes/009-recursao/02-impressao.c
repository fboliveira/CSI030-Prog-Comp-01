#include <stdio.h>


void imprimir_ite(int v[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("[ %d ] ", v[i]);
    }

    printf("\n");
}

void imprimir_rec_desc(int v[], int i) {

    if (i < 0) {
        printf("\n");
        return;
    }

    printf("[ %d ] ", v[i]);
    imprimir_rec_desc(v, i - 1);

}

void imprimir_rec_asc(int v[], int i, int n) {

    if (i >= n) {
        printf("\n");
        return;
    }

    printf("[ %d ] ", v[i]);
    imprimir_rec_asc(v, i + 1, n);

}


int main(int argc, char const *argv[]) {

    int v[] = { 5, 4, 8, 1, 3, 7 };
    int n = 6;

    printf("Iterativa: \n");
    imprimir_ite(v, n);

    printf("Recursiva - descendente:\n");
    imprimir_rec_desc(v, n - 1);

    printf("Recursiva - ascendente: \n");
    imprimir_rec_asc(v, 0, n);

    return 0;
}