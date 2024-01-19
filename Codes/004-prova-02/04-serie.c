float serie(int x, int n) {

    float i, termo, soma = 0;

    for(i = 1; i <= n; i++) {

        termo = ( pow(x, i) + 2 * i + 2 ) / ( x + i + 1);
        soma += termo;

    }

    soma = 5 * n + soma;

    return soma;

}