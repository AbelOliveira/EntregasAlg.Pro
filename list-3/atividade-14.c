#include <stdio.h>
#include <string.h>

int main(){

    int age, pay;
    char dep[2];


    printf("Quantos anos tem o Conveniado: ");
    scanf("%d", &age);

    if(age < 10){
        pay = 300 + 100;
        printf("Para uma criança de %d anos fica em torno de R$%.2d",age,pay);
    }else if(age <= 30){
        pay = 300 + 220;
        printf("Para um adulto de %d anos fica em torno de R$%.2d",age,pay);
    }else if(age > 30 && age <= 60){
        pay = 300 + 395;
        printf("Para uma pessoa de %d anos fica em torno de R$%.2d",age,pay);
    }else if(age > 60){
        pay = 300 + 480;
        printf("Para uma pessoa de %d anos fica em torno de R$%.2d",age,pay);
    }

    return 0;
}