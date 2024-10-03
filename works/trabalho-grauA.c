#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int sistem=1, opt, numciclo, newpop, clima, populacao;
    char taxacreSTR[10];
    float taxacre;

    while (sistem==1){

//      MENU INICIAL
        printf("|======================|\n");
        printf("| 1 - Nova Simulação   |\n");
        printf("| 2 - Sair do Programa |\n");
        printf("|======================|\n");

        printf("Escolha uma opção: ");
        scanf("%d",&opt);

        if (opt == 1){  //INÍCIO O SISTEMA.

            printf("========================\n");

            printf("População inicial: ");
            scanf("%d", &populacao);

            printf("Taxa de crescimento: ");
            scanf("%s", &taxacreSTR);
            sscanf(taxacreSTR,"%f%%",&taxacre);     //pega a string e coloca apenas os números na var "taxacre".

            taxacre = taxacre / 100;                //transforma a porcentagem em decimal.
            printf("%.2f \n",taxacre);

            printf("Número de ciclos: ");
            scanf("%d", &numciclo);
            printf("========================\n");
    
            printf("\n\n");
            printf("==================================");

            for (int i = 1; i <= numciclo; i++){
                
                if(populacao <= 0){
                    printf("A população acabou morrendo, a simulação não poderá dar seguimento...");

                }else{
                    clima= 1+ rand()%100;

                    if(clima <=20){  //Ciclo de Alta Temperatura
                        populacao = populacao - (populacao * 0.3);

                        printf("\nCiclo %d: População = %d (Condição Adversa: Alta Temperatura)",i,populacao);

                    } else if(clima <= 20+15){  //Ciclo de Falta de Nutrientes
                        populacao = populacao - (populacao * 0.25);

                        printf("\nCiclo %d: População = %d (Condição Adversa: Falta de Nutrientes)",i,populacao);

                    } else if(clima <= 20+15+10){  //Ciclo de Excesso de Umidade
                        populacao = populacao - (populacao * 0.2);

                        printf("\nCiclo %d: População = %d (Condição Adversa: Excesso de Umidade)",i,populacao);

                    } else if(clima <= 20+15+10+5){  //Ciclo de Radiação Ultravioleta
                        populacao = populacao - (populacao * 0.5);

                        printf("\nCiclo %d: População = %d (Condição Adversa: Radiação Ultravioleta)",i,populacao);

                    } else if(clima <= 20+15+10+5){  //Ciclo de Condição Favorável
                        populacao = populacao + (populacao * 0.2);

                        printf("\nCiclo %d: População = %d (Condição Adversa: Condição Favorável)",i,populacao);
                        
                    } else{
                        populacao = populacao + (populacao*taxacre);
                        printf("\nCiclo %d: População = %d",i,populacao);
                    }
                }
            }

            printf("\n==================================");    
            printf("\n");

        }else{  //FINALIZANDO O SISTEMA
            sistem = 0;

            printf("\n");
            printf("\n");
            printf("|==================|\n");
            printf("|SAINDO DO PROGRAMA|\n");
            printf("|==================|\n");
        }
    }
    return 0;
}