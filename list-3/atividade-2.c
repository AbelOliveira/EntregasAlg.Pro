#include <stdio.h>

int main(){

    int A, B, C, ab, ac;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    ab = A + B;
    ac = A + C;

    if (ab < ac){
        printf("A soma dos valores %.2d e %.2d é menor que %.2f.",A,B,ac);

    }else{
        printf("A soma dos valores %.2d e %.2d é maior que %.2f.",A,B,ac);
    }

    return 0;
}