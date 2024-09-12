#include <stdio.h>

int main(){
    
    int op;
    float real, dolar, euro, valor;

    printf("Digite um valor em Real(R$): ");
    scanf("%f", &real);

    printf("Digite um valor em Dolar($): ");
    scanf("%f", &dolar);

    printf("Digite um valor em Euro(€): ");
    scanf("%f", &euro);

    printf("\n=================================\n");
    printf("1) Converter de Real para Euro\n2) Converter de Real para Dólar\n3) Converter de Euro para Dólar\n4) Converter de Euro para Real\n5) Converter de Dólar para Euro\n6) Converter de Dólar para Real\n");
    printf("=================================\nEscolha a forma de converter: ");
    scanf("%d", &op);

    if (op == 1){
        valor = real * 0.16;
        printf("O valor de R$%.2f em euro equivale à €%.2f",real,valor);

    } else if (op == 2){
        valor = real * 0.18;
        printf("O valor de R$%.2f em dolar equivale à $%.2f",real,valor);

    } else if (op == 3){
        valor = euro * 1.10;
        printf("O valor de €%.2f em dolar equivale à $%.2f",euro,valor);
        
    } else if (op == 4){
        valor = euro * 6.22;
        printf("O valor de €%.2f em real equivale à R$%.2f",euro, valor);
        
    } else if (op == 5){
        valor = euro * 0.91;
        printf("O valor de $%.2f em euro equivale à €%.2f",dolar,valor);
        
    } else if (op == 6){
        valor = euro * 5.67;
        printf("O valor de $%.2f em real equivale à R$%.2f",dolar,valor);
        
    }
    
    return 0;
}