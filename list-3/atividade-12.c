#include <stdio.h>

int main(){

    int age;

    printf("Digite a idade do Nadador: ");
    scanf("%d", &age);

    if(age == 5 || age == 6 || age == 7){
        printf("A categoria deste nadador de %d anos é Infantil A.",age);
    }else if(age == 8 || age == 9 || age == 10){
        printf("A categoria deste nadador de %d anos é Infantil B.",age);
    }else if(age == 11 || age == 12 || age == 13){
        printf("A categoria deste nadador de %d anos é Juvenil A.",age);
    }else if(age == 14 || age == 15 || age == 16 || age == 17){
        printf("A categoria deste nadador de %d anos é Juvenil B.",age);
    }else if(age >= 18){
        printf("A categoria deste nadador de %d anos é Sênior.",age);
    }

    return 0;
}