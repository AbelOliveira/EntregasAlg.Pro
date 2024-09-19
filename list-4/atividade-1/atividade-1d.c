#include <stdio.h>

int main(){

    int num=25;

    while(num <= 95){
        if(num%2 != 0){
            if(num == 95){
                printf("%d.",num);
            }else{
                printf("%d, ",num);
            }
        }

        num = num+1;

    }

    return 0;
}