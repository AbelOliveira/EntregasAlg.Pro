#include <stdio.h>

int main(){

    float g, d=0.15, t;
    
    printf("Quanto você gastou na loja? ");
    scanf("%f", &g);
    
    t = g - (g*d);

    printf("Como a loja está em promoção de 15%. Seu valor total ficou em R$%.2f", t);

    return 0;
}