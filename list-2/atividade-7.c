#include <stdio.h>

int main(){
    
    int p, g, m;

    printf("Quantos pássaros você possui? ");
    scanf("%d", &p);

    g = p*30;
    m = g*30;

    printf("Você precisará de %dg de ração por dia, ou seja, será %dg por mês.",g,m);

    return 0;
}