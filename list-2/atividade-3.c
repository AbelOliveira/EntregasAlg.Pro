#include <stdio.h>

int main(){

    float peso, pagar;

    printf("Digite quanto kg deu seu prato: ");
    scanf("%f", &peso);

    pagar = peso*40;

    printf("como seu prato está pesando %.2fkg, o valor há pagar será de R$%2.f", peso, pagar);

    return 0;
}