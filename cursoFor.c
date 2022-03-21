#include <stdio.h>
#include<stdlib.h>

int main(){

    int cont;
    float salario,media,soma,maior;
    maior =0;
    soma =0;

    for(cont =1;cont<=10;cont++){
        printf("digite o seu salario:");
        scanf("%f",&salario);

        soma = soma+salario;

        if(salario > maior){
            maior = salario;
        }
    }

    media = soma/5;

    printf("o maior salario e = %.2f \n",maior);

    printf("a media salarial e = %.2f \n",media);

    return 0;



}