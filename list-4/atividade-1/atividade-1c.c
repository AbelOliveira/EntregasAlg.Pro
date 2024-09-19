#include <stdio.h>

int main(){

    int num=70;

    while (num >= 20){
        if(num == 20){
            printf("%d.", num);
            
        }else{
            printf("%d, ", num);
        }
        num = num -1;
    }
    return 0;
}