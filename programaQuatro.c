#include <stdio.h>

void main(){

    float dividendo;
    int divisor;

    printf("entre com dois numeros reais : \n");

    scanf("%f %d",&dividendo,&divisor);

    printf("a divisao de %.2f por %d vale %.2f",dividendo,divisor,dividendo/divisor);
}