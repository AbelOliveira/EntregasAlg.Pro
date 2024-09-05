#include <stdio.h>

int main(){
    
    float c, f;
    
    printf("Quantos C° está nesse momento? ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("%.1fC° equivale à %.1f Fahrenheit.", c, f);

    return 0;
}