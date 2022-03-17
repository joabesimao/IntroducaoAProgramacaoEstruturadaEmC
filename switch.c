#include <stdio.h>

int main(){

    int opcao;

    printf("entre com 1-para adicionar e 2-para excluir:\n");
    scanf("%d",&opcao);

    switch (opcao){
        case 1: {
            printf("\n Numero1\n");
            break;
        }
        case 2: {
            printf("\n numero2\n");
            break;
        }
        default: printf("\n opcao invalida\n \n");
    }
    printf("\n fim");
}
    