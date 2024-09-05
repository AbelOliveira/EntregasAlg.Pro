#include<stdio.h>

int i;

int main(){

    int min, sec;

    printf("Digite um valor em minutos: ");
    scanf("%d", &min);

    sec = min*60;

    printf("A quantidade de segundos em %d minuto, é de %d segundos.",min, sec);

    return 0;
}