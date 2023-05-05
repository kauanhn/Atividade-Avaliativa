#include <stdio.h>

int main() {
    int opcao, quantidade;
    float valor_total = 0;

    while(1) {
        printf("\nMenu de Frutas\n");
        printf("1 => ABACAXI => 5,00 a unidade\n");
        printf("2 => MACA => 1,00 a unidade\n");
        printf("3 => PERA => 4,00 a unidade\n");
        printf("0 => Encerrar compra\n");

        printf("\nDigite a opcao que voce deseja: ");
        scanf("%d", &opcao);

        if(opcao == 0) {
            break;
        }

        switch(opcao) {
            case 1:
                printf("ABACAXI selecionado. Valor unitario: R$ 5,00.\n");
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 5.0;
                break;

            case 2:
                printf("MAÇA selecionada. Valor unitario: R$ 1,00.\n");
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 1.0;
                break;

            case 3:
                printf("PERA selecionada. Valor unitario: R$ 4,00.\n");
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 4.0;
                break;

            default:
                printf("Opcao invalida, tente de novo:\n");
                break;
        }
    }

    printf("Valor total da compra: R$ %.2f\n", valor_total);

    return 0;
}
