#include <stdio.h>

int main(){

    float n1, n2, v;
    
    printf("Digite um número pra ser o dividendo: ");
    scanf("%lf", n1);

    printf("Digite outro número pra ser o divisor: ");
    scanf("%lf", n2);

    if (n2 != 0){
        v = n1/n2;
        printf("A divisão de %lf por %lf irá resultar em: %.2lf",n1,n2,v);
    }else{
        printf("Desculpe, mas não é possivel dividir com o número zero D:");
    }
    
    return 0;
}