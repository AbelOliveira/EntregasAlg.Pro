#include <stdio.h>

int main(){

    int num, t=0;
    float med;

    for (int i = 1; i <= 15; i++){
        printf("Digite o %dº valor inteiro: ", i);
        scanf("%d", &num);
        t = num + t;
    }

    med = t/15;

    printf("Soma: %d\n", t);
    printf("Média: %.2f", med);

    return 0;
}