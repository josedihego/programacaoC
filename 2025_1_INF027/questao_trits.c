#include <stdio.h>
#include <stdlib.h>


int main(){
    int t1,t2,t3,t4;
    printf("Informe o trit4: ");
    scanf("%d",&t4);
    printf("Informe o trit3: ");
    scanf("%d",&t3);
    printf("Informe o trit2: ");
    scanf("%d",&t2);
    printf("Informe o trit1: ");
    scanf("%d",&t1);
    int resultado = 0;
    if(t4==2){
        resultado = resultado + 3*3*3;
    }
    else if(t4==0){
        resultado = resultado - 3*3*3;
    }
    else{
        resultado = resultado + 0;
    }

    if(t3==2){
        resultado = resultado + 3*3;
    }
    else if(t3==0){
        resultado = resultado - 3*3;
    }
    else{
        resultado = resultado + 0;
    }
    if(t2==2){
        resultado = resultado + 3;
    }
    else if(t2==0){
        resultado = resultado -3;
    }
    else{
        resultado = resultado +0;
    }
    if(t1==2){
        resultado = resultado + 1;
    }
    else if (t1==0){
        resultado = resultado - 1;
    }
    else{
        resultado = resultado + 0;
    }
    printf("Conersão do tris %d%d%d%d para decimal produz %d\n", t4,t3,t2,t1,resultado);
}