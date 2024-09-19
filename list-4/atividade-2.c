#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));

    int r, v=1, random =3, i=1;
    char pa; //PlayAgain

    // = (rand()%10) +1;
    printf("Estou pensando em um número de 1 à 10! Você possui 3 chances!!!\n");

    while(i == 1){
        while (v<=3){
            printf("Digite seu %d valor: ", v);
            scanf("%d", &r);

            if(r == random){
                printf("Parabéns! O número que eu estava pensando era realmente %d!",random);
                v = 4;
            }else{
                printf("Não estava pensando em %d, tente novamente!!", r);
                v++;
            }
        }

        if(v>3){
            printf("Você perdeu... Deseja jogar novamente? S/N: ");
            scanf("%s", pa);

            if(strcmp(pa,"S") == 0){
                i == 1;
            }else{
                i == 0;
            }
        }else{
            printf("Você ganhou!!! Deseja jogar novamente? S/N: ");
            scanf("%s", pa);

            if(strcmp(pa,"S") == 0){
                i == 1;
            }else{
                i == 0;
            }
        }
    }

    return 0;
}