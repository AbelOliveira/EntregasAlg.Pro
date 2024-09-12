#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int num, esc, som, r = rand()%6;
    
    printf("Escolha um número \n 1) PAR \n 2) IMPAR \n --> ");
    scanf("%d", &esc);
    
    printf("Agora digite um número de 0 a 5: ");
    scanf("%d", &num);
    
    som = num + r;
    
    if (esc == 1){
        if(som % 2 == 0){
            printf("Você Ganhou! O número era %d! E eu escolhi %d",som,r);
        }else{
            printf("Eu Ganhei! O número era %d! O meu número era %d",som,r);
        }
    }else{
        if(som % 2 == 0){
            printf("Eu Ganhei! O número era %d! E eu escolhi %d",som,r);
        }else{
            printf("Você Ganhou! O número era %d! O meu número era %d",som,r);
        }
    }

    return 0;
}