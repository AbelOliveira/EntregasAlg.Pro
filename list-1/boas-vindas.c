#include <stdio.h>

int main(){

    char name[100];

    printf("Digite seu nome: ");
    scanf("%s", &name);

    printf("Olá %s! Muito Prazer te conhecer!", &name);

    return 0;
}