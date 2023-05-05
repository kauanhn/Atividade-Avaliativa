#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;                         // posição até a qual será lida
    int seq = 1, seq_a = 0, seq_b; // variaveis para armazenar o numero atual e anterior da sequência, e uma auxiliar para trocar esses valores

    printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
    scanf("%d", &n);

    printf("\n0 ");
    n--;

    while (n)
    {
        printf("%d ", seq);
        seq_b = seq;
        seq += seq_a;
        seq_a = seq_b;
        n--;
    }


    return 0;
}
