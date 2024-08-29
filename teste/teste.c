#include <stdio.h>

int main(){

    int pi, r, valor;

    printf("Olá! Selecione o valor de PI desejado: \n 1. valor 3 \n 2. valor 3,14 \n 3. valor em símbolo \n Digite sua resposta aqui: ");
    scanf("%d", &pi);

    printf("ótimo, agora digite o valor do raio: ");
    scanf("%d", &r);

    if (pi = 1){
        valor = 2*3*r;

    }else if (pi = 2){
        valor = 2*3,14*r;

    }else if (pi = 3){
        valor = 2*r;

    }else{
        printf("Valor Inválido!!!");
    }

    if (pi = 3){
     printf("A Circuferência deste círculo será em %d!", valor);

    }else{
     printf("A Circuferência deste círculo será em %dπ!", valor);

    }   

return 0;
}