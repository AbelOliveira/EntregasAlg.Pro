#include <stdio.h>

int main(){
    
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num%3 == 0){
        printf("O número %d é divisível por 3!",num);
    }else{
        printf("O número %d NÃO é divisível por 3!",num);
    }
    
    return 0;
}