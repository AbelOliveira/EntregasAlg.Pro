#include <stdio.h>
#include <string.h>

int main(){

    float ga, gb, gc, t;
    char op[2];

    printf("Digite sua nota do Grau A: ");
    scanf("%f", &ga);

    printf("Digite sua nota do Grau B: ");
    scanf("%f", &gb);

    t = (ga + 2*gb) / 3;

    if (t < 6 ){
        printf("Infelizmente sua média ficou em %.1f pontos, insira a sua nota do Grau C:\n", t);
        printf("--> ");
        scanf("%f",&gc);

        printf("Deseja substituir sua nota do Grau C com quais dos graus?");
        printf("\n==========\n");
        printf("1) Grau A\n");
        printf("2) Grau B\n");
        printf("==========\n");
        printf("--> ");
        scanf("%c", &op);

        if (strcmp(op, "a") == 0){
            ga = gc;
            t = (ga + 2*gb) / 3;
            printf("%1.f",t);

        }else{
            gb = gc;
            t = (ga + 2*gb) / 3;
            printf("%1.f",t);
        }

        if (t < 6 ){
        printf("Infelizmente sua média ficou em %.1f pontos...",t);
        }else{
            printf("Parabéns! Conseguistes recuperar com %.1f pontos!",t);
        }

    }else{
        printf("Parabéns! Você passou com uma média de %.1f pontos!", t);
    }
    

    return 0;
}