// Escreva um programa em C que realize o seguinte procedimento:
// 1. Imprima na tela a seguinte questão: Qual é o verdadeiro nome do super-herói Batman?
// 2. Apresente cinco alternativas para o usuário, cada uma em uma linha:
//         a) Bruce Wayne b)Clark Kent c) Peter Parker d) Tony Stark e) Steve Rogers
// 3. Armazene a letra correspondente à resposta correta (‘a’) em uma variável.
// 4. Solicite ao usuário que digite sua resposta, e a armazene em uma variável.
// 5. Ao final, o programa deve exibir na tela a resposta do usuário e a resposta correta. Por exemplo, se o usuário digitou como resposta a alternativa ‘d’, a mensagem seria esta: Você respondeu alternativa d. A resposta correta é a alternativa a.

#include <stdio.h>
#include <string.h>

int main(){

    char correto = "a", resposta[2];

    printf("Qual é o verdadeiro nome do super-herói Batman? \n ================ \n a) Bruce Wayne \n b) Clark Kent \n c) Peter Parker \n d) Tony Stark \n e) Steve Rogers \n =============== \n Resposta: ");
    scanf("%s", &resposta);

    if (resposta == correto){
        printf("Parabéns! Você acertou a questão!");

    }else{
        printf("Você respondeu alternativa %s. A resposta correta é a alternativa a.",resposta);

    }

    return 0;
}