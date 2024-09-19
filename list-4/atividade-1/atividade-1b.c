#include <stdio.h>

int main(){

    int num=20;

    while(num <= 50){
        if(num%2 == 0){
            if(num == 50){
                printf("%d.",num);
            }else{
                printf("%d, ",num);
            }
        }

        num = num+1;

    }

    return 0;
}