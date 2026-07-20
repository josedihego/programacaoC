#include <stdio.h>
#include <stdlib.h>
//326.496.000-12
int main(){
    int c1,c2,c3,c4,c5,c6,c7,c8,c9;
    int d1,d2;
    printf("Informe seu CPF:");
    scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9,&d1,&d2);
    int soma = (c1*10)+(c2*9)+(c3*8)+(c4*7)+(c5*6)+(c6*5)+(c7*4)+(c8*3)+(c9*2);
    int resto = soma % 11;
    int div1, div2;
    if(resto<2){
        div1 = 0;
    }
    else{
        div1 = 11 - resto;
    }
    if(d1==div1){
        soma = (c1*11)+(c2*10)+(c3*9)+(c4*8)+(c5*7)+(c6*6)+(c7*5)+(c8*4)+(c9*3)+(d1*2);
        resto = soma % 11;
        if(resto < 2){
            div2 = 0;
        }
        else{
            div2 = 11 - resto;
        }
        if(d2==div2){
            printf("CPF válido ✅ \n");
        }
        else{
            printf("CPF inválido no DV2 ❌ \n");
        }
    }
    else{
        printf("CPF inválido no DV1 ❌ \n");
    }
}