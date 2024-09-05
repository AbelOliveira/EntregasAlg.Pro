#include <stdio.h>

int main(){

    float ga, gb, gf;

    printf("Digite sua nota do Grau A: ");
    scanf("%f", ga);

    printf("Digite sua nota do Grau B: ");
    scanf("%f", gb);

    gf = (ga + 2*gb) / 3;

    if (gf>=6)
    {
        printf("Parabéns! Você passou nessa cadeira com a nota de %.2f.",gf);
    
    }else{
        printf("Essa não, você não passou. Sua nota ficou em %.2f. Terá que fazer o Grau C!",gf);
    }
    
    // TERMINAR PQ TA DANDO ERRO
    

    return 0;
}