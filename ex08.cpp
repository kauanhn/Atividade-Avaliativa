#include <stdio.h>

int main() {
    int num, maior, menor, n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);



    do {
        printf("\nDigite um numero:");

        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
        }

        if (n < menor)

        {

            menor = n;
        }

        num = n;

    } while (num >= 0);
    
    printf("\n");

    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);

    return 0;
}

