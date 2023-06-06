#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int idade;
    float peso;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);


    if (idade >= 18 && idade <= 67) {
        printf("Digite o seu peso: ");
        scanf("%f", &peso);
        
        if (peso > 50) {
            printf("Voce pode doar sangue.\n");
        } else {
                    printf("Voce nao tem o requisito de PESO para doar sangue.\n");
        }
    } else {
        printf("Voce nao tem o requisito de IDADE para doar sangue.\n");
    }


    return 0;
}