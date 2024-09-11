#include <stdio.h>

int main(){

    int a, v;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    if (a < 0)
    {
        v = a*a*a;
        printf("O triplo de %d é: %d",a,v);
    }else{
        v = a*a;
        printf("O dobro de %d é: %d",a,v);
    }
    

    return 0;
}