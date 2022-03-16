#include <stdio.h>

int main(){

    float av1,av2,media;

    printf("informe a nota da AV1 \n");
    scanf("%f",&av1);

    printf("informe a nota da AV2 \n");
    scanf("%f",&av2);

    media = (av1 + av2) / 2.0;

    if(media >= 7){
        printf("PARABENS! VOCE ESTÁ APROVADO \n");
    }else{
        printf("que pena vc nao está aprovado!");
    }
}