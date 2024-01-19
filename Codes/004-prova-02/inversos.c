void inversos(int n1, int n2) {
    float inv, soma = 0, divisao = 1, mult = 1, media;

    int i, menor, maior, n = 0;

    if (n1 < n2) {
        menor = n1;
        maior = n2;
    } else {
        menor = n2;
        maior = n1;
    }

    for (i = menor; i <= maior; i++) {
        if (i != 0) {
            n++;
            inv = 1.0 / (i * i * i);

            soma += inv;
            mult *= inv;
            div /= inv;
        }
    }

    printf("Soma = %.2f\n", soma);
    printf("Multiplicacao = %.2f\n", mult);
    printf("Divisao = %.2f\n", div);

    media = soma / n;
    printf("Media = %.2f\n", media);
}