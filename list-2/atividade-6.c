#include <stdio.h>

int main(){

    int sma, tab, lucro;

    printf("Smartphones vendidos: ");
    scanf("%d", &sma);

    printf("Tablets vendidos: ");
    scanf("%d", &tab);

    lucro = (sma*1000) + (tab*1500);

    printf("Com %d smartphones e %d tablets vendidos, você teve um lucro total de R$%.2d", sma, tab, lucro);

return 0;

}


