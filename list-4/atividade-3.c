#include <stdio.h>
#include <string.h>

int main(){

    int num, val;
    char loop[2]="s", res[2];

    while(strcmp(loop, "s") == 0){

        printf("Digite um número de 1 à 9: ");
        scanf("%d", &num);

        if(num >9 || num <1){

            printf("\nValor inválido...\n\n");

        }else{

            printf("===========================\n");

            for (int i = 1; i <= 10; i++){

                val = num * i;
                printf("%d x %d = %d\n",num,i,val);
            }
            printf("===========================\n");

            printf("Calcular outro número (s/n)? ");
            scanf("%s",&loop);

        }
    }

    return 0;
}