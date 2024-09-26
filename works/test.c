#include <stdio.h>

int main(){

    int valor, ciclo;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    printf("Digite o ciclo: ");
    scanf("%d", &ciclo);

    for (int i = 1; i <= ciclo; i++){

        valor = valor + (valor *0.1);
        printf("\nCiclo %d: valor: %d",i,valor);
    }

    return 0;
}