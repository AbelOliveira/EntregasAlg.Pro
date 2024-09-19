#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int random;

    for(int i=1; i <= 10; i++){
        random = (rand() % 21) - 10;

        if(random > 0){
            printf("%d é Positivo.\n",random);
        }else if(random < 0){
            printf("%d é Negativo.\n",random);
        }else{
            printf("%d é nulo.\n",random);
        }
    }
    return 0;
}

