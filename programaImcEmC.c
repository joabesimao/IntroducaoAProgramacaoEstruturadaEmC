#include <stdio.h>

void main(){ 
 
    float altura,peso,imc;

    printf("entre com a sua altura e o seu peso:\n");

    scanf("%f %f",&altura,&peso);

    imc = (peso/altura)/altura;
    
    printf("seu IMC vale %f\n",imc); */