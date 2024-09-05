#include <stdio.h>

int main(){

    float litro, preco;

    printf("O preço da gasolina está em R$6,09 por litro\nQuantos litros deseja abastecer? ")/
    scanf("%f", &litro);

    preco = litro*6.09;

    printf("O valor a ser pago é de R$%.2f", preco);

    return 0;
}