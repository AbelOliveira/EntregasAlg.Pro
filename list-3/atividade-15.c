#include <stdio.h>

int main(){

    float price, desc, tax;
    int op;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &price);


    printf("================================");
    printf("\nDigite a forma de pagamento:\n");
    printf("================================\n");
    printf("1 - À vista em dinheiro\n");
    printf("2 - À vista no cartão de crédito\n");
    printf("3 - Em duas vezes\n");
    printf("4 - Em três vezes\n");
    printf("================================\n");
    scanf("%d",&op);

    if (op == 1){
        desc = price * 0.15;
        price = price - desc;

        printf("A vista fica no total de R$%.2f", price);

    }else if (op == 2){
        desc = price * 0.10;
        price = price - desc;

        printf("Em crédito à vista fica R$%.2f", price);

    }else if (op == 3){
        tax = price / 2;

        printf("Ficou em duas vezes de R$%.2f. Totalizando: R$%.2f", tax, price);

    }if (op == 4){
        desc = price * 0.10;
        price = price + desc;
        tax = price / 3;

        printf("Ficou em três vezes de R$%.2f. Totalizando: R$%.2f", tax, price);
    }
    

    return 0;
}