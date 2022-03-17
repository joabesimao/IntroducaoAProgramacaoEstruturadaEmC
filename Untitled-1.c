#include <stdio.h>

int main(){

    int opcao;

    printf("entre com um numero inteiro:\n");
    scanf("%d",&opcao);

    if(opcao >=0){

        if(opcao == 0){
       printf("\n numero nulo.\n");
        }else{
            
            printf("\n Numero positivo.\n");
        }
     }else{
        printf("\n numero negativo.\n");

    }
    }
    
