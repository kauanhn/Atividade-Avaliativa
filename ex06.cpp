#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos numeros naturais abaixo de 1000 que s�o multiplos de 3 ou 5 eh: %d \n", soma);

    return 0;
}

