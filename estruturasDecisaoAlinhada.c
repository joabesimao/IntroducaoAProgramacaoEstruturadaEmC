#include<stdio.h>
//decisaoAlinhada
int main(){
    int a;
    scanf("%d",&a);

    if(a<0){
        printf("\n negativo");
        if(a%2 ==0) 
        printf("par");
        else printf("impar");
    }else{
        printf("\n positivo");
        if(a%2 ==0) 
        printf("par");
        else printf("impar");
    }


//ternario =>
    int b;


    scanf("%d",&b);

    const char* resul = 
    (a<0)?
    ((a%2==0)?"\n negativo par":"\n negativo impar"):((a%2==0)?"\n positivo par":"\n negativo impar");
        printf(resul);


    //encadeadas

    int main(int argc,char *argv[]){
      char sexo;
      printf("qual é o seu sexo? (f/m " );
      scanf("%c",&sexo);

      if(sexo == "f" || sexo == "F")
      printf("vc é do sexo feminino.");
      else
      if(sexo == "m" || sexo == "M")
      printf("vc é do sexo masculino. ");
      else
      printf("vc digitou uma entrada invalida");
    }
}