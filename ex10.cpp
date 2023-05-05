#include <stdio.h>

int main() {
    int num, soma = 0, i;
    float media;

    for (i = 0; i < 10; i++) {
    	printf("Digite 10 numeros inteiros:\n");
        scanf("%d", &num);
        soma += num;
    }

    media = (float)soma / 10;

    printf("A media dos numeros digitados eh: %.2f", media);

    return 0;
}
