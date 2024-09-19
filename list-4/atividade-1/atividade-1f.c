#include <stdio.h>

int main(){

    int num, par=0, imp=0;

    for (int i = 1; i <= 10; i++){
        printf("Digite o %dº número inteiro: ",i);
        scanf("%d", &num);

        if(num%2 == 0){
            par = par+1;
        }else{
            imp = imp+1;
        }
    }

    printf("Teve %d número pares.", par);    
    printf("Teve %d número ímpares.", imp);

    return 0;
}