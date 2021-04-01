#include <stdio.h>

int main(){
    char c;
    float i, p, soma=0;

    printf("digite n para entrar no programa e s para sair.\n\ndigite a letra que deseja :");
    scanf("%c", &c);

    while(c=='n' && c!='s'){

        printf("\n\ndigite a idade:");
        scanf("%f", &i);

        printf("\n\ndigite peso:");
        scanf("%f", &p);

        printf("\n\ndigite n para continuar ou s para sair:");
        scanf( " %c", &c);



    }

    return 0;
}