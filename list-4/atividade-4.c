#include <stdio.h>

int main(){


     int num, ini, fin, div;

     printf("Entre com o valor do divisor: ");
     scanf("%d", &num);

     printf("Início do intervalo: ");
     scanf("%d", &ini);
     
     printf("Final do intervalo: ");
     scanf("%d", &fin);


    printf("Números divisíveis por %d no intervalo de %d a %d:\n",num,ini,fin);
    for (int i = ini; i <= fin; i++){


        if(i%num == 0){
            printf("%d ", i);
        }
    }
    

    return 0;
}