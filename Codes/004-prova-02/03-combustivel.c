void combustivel(float D, float c, float q) {

    if (D == 0) {
        D = c * q;
        printf("Distancia km = %.2f\n", D);
    } else if ( c == 0 ) {
        c = D / q;
        printf("Distancia por litro = %.2f\n", c);
    } else {
        q = D / c;
        printf("Quantidade = %.2f\n", q);

    }

}