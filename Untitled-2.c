#include <stdio.h>

int main(){
    float precoAlcool,precoGasolina,fatorDecisao;
    printf("preco do alcool \n");
    scanf("%f",&precoAlcool);

    printf("preco gasolina \n");
    scanf("%f",&precoGasolina);

    if(precoGasolina>0){
        float valor = precoAlcool/precoGasolina;
        if((precoAlcool/precoGasolina)<= 0.7){
            printf("alcool\n");
             printf("%f\n",valor);

        
    }else{
        printf("\ngasolina\n");
    
    printf("%f",valor);

    }

    
}
}