#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int random, op;

    printf("====================\n");
    printf("Digite qual dado você deseja\n");
    printf("1) 1D4 \n");
    printf("2) 1D6 \n");
    printf("3) 1D8 \n");
    printf("4) 1D10 \n");
    printf("5) 1D12 \n");
    printf("6) 1D16 \n");
    printf("====================\n");
    printf("--> ");
    scanf("%d",&op);

    if(op == 1){
        random = 1 + rand()%4;
        printf("1D4 resultou em: %d", random);

    }else if(op == 2){
        random = 1 + rand()%6;
        printf("1D6 resultou em: %d", random);

    }else if(op == 3){
        random = 1 + rand()%8;
        printf("1D8 resultou em: %d", random);

    }else if(op == 4){
        random = 1 + rand()%10;
        printf("1D10 resultou em: %d", random);

    }else if(op == 5){
        random = 1 + rand()%12;
        printf("1D12 resultou em: %d", random);

    }else if(op == 6){
        random = 1 + rand()%16;
        printf("1D16 resultou em: %d", random);

    }else{
        printf("Está opção não é valida.");
    }

    return 0;
}