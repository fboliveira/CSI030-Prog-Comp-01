int operacao(int k) { // 7
    k--; // 6
    return k * k; // 6 * 6
}

int funcao(int x) { // 5

    x+=2; // local - 7

    int w = operacao(x); // 7

    printf("x = %d", x); // 7

    return w;

}

int calculo(int *x, int *y) { // x = 5; y = 3
 
    // *x = conteúdo para quem x aponta
    // x => referência de memória

    //x += 2; // modificação do endereço para quem x aponta
    //y +- 2; // modificação do endereço para quem y aponta

    *x = *x + 2; // *x += 2    
    *y = *y - 2; // *y -= 2

    return (*x + *y);

}


int main(int argc, char const *argv[])
{

    int n = 5;
    int m = 3;

    int k;
    scanf("%d", &k); // 10
    printf("k = %d", k); // 10

    int retorno = funcao(n); // 5
    printf("n = %d", n); // 5

    int c = calculo(&n, &m); // n e m;


    /* code */
    return 0;
}
