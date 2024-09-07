#include <stdio.h>

int main(){

    float cam, cal, pago, cin, all, desc=0.10, price;

    printf("Quantas camisetas você comprou? ");
    scanf("%f", &cam);

    printf("Quantas calças você comprou? ");
    scanf("%f", &cal);

    printf("Quantas cintos você comprou? ");
    scanf("%f", &cin);

    all = (cam*25)+(cal*100)+(cin*40);

    price = all - (all*desc);

    printf("O valor ficou em R$%.2f, mas com o nosso desconte de 10%, ficou no valor de R$%.2f!", all, price);

    return 0;
}