#include<stdio.h>

int main(){
    int opcao;
 
    printf("entre com um numero: \n");
    scanf("%d",&opcao);

    if(opcao > 0){
        printf("\n numero postivo.\n");

    }else if(opcao == 0){
        printf("numero nulo");
      }else{
        printf("\n numero negativo.\n");
    }

    int media;
    printf("entre com um numero: \n");
    scanf("%d",&media);

    if(media >= 0){
        if(media == 0){
            printf("\n numero nulo");
        }else{
            printf("\n numero positivo.\n");
        }
    }else{
        printf("\n numero negativo\n");
    }

}


