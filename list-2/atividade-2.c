#include <stdio.h>

int main(){

    double dollar, real;

    printf("Por favor, digite quantos dólares você deseja adiquirir: ");
    scanf("%lf", &dollar);

    real = dollar*5.64;

    printf("$%.2lf equivale a R$%.2lf",dollar, real);

    
    return 0;
}