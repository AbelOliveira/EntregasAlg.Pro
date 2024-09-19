#include <stdio.h>

int main(){

    int num=0;

    while (num <= 100){
        if(num == 100){
            printf("%d.",num);
        }else{
            printf("%d, ",num);
        }
        num = num +1;
    }
    

    return 0;
}