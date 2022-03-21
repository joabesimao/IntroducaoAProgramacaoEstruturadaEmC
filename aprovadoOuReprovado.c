#include<stdio.h>

int main(){
    int nota1,nota2,nota3;

    float media;

    printf("insira a primeira nota\n");
    scanf("%d",&nota1);
    printf("insira a segunda nota\n");
    scanf("%d",&nota2);
    printf("insira a terceira nota\n");
    scanf("%d",&nota3);

    
    media = (nota1 + nota2 + nota3)/3;
    printf("sua media: %f",media);

    if(media >=7){
        if(media<=10){
            printf("\n aprovado\n");
        }else{
            printf("\n valor incorreto!\n");
        }
    }else{

        if(media>=5){
            printf("\nrecuperacao\n");
        }else{
            if(media >=0){
                printf("\n reprovado\n");
            
            }else{
            printf("\n valor incorreto\n");
        }
    }

    }
}
//33341344
