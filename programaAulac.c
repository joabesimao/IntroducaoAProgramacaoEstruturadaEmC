#include <stdio.h>

int main(){

    int cadastrado,ativo,logado;
    char opcao;

    cadastrado = ativo = logado = 0;

    printf("Deseja cadastrar sua conta? S/N");
    scanf(" %c",&opcao);

    if(opcao == "S"){
        cadastrado = 1;
        printf("conta cadastrada.\n");

    }

    printf("deseja ativar a sua conta? S/N \n");
    scanf("%c",&opcao);

    if(opcao == "S"){
        cadastrado = 1;
        printf("\n conta ativada.\n");
    }

    printf("deseja logar sua conta? S/N \n");
    scanf("%c",&opcao);

    if(opcao == "S"){
        logado = 1;
        printf("\n conta logada. \n");
    }

    if((cadastrado == 1 ) && (ativo == 1) && (logado ==1)){
        printf("\n Seja bem vindo.\n");

    }else{
        printf("\n Algo deu errado.\n");
    }



}