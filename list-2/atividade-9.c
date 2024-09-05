#include <stdio.h>

int main(){

    float g, d=0.15, t;
    
    printf("Quanto você gastou na loja? ");
    scanf("%f", &g);
    
    t = g - (g*d);

    printf("A loja está em desconto de 15 porcento!! Seu valor total ficou em R$%.2f", t);

    return 0;
}