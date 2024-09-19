#include <stdio.h>

int main(){

    int v, n,i=1, s=0;

    printf("Digite quantos números você deseja somar: ");
    scanf("%d", &v);

    while(i <= v){

        printf("Digite o %dº valor: ", i);
        scanf("%d", &n);

        s = s + n;

        i++;
    }

    printf("A soma destes número resultará em: %d",s);

    return 0;
}