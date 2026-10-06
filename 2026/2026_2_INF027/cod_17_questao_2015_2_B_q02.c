#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int d,m,a;
    printf("Informe dd-mm-aaaa: ");
    scanf("%d-%d-%d",&d,&m,&a);
   // printf("%.2d-%.2d-%.4d\n", d,m,a)
   //01, 03, 05, 07, 08, 10 e 12 : 31 dias
   // 04, 06, 09 e 11: 30 dias
   // 02: 28 ou 29 dias 
   if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){ // esse mes tem 31 dias
      d = d+1;
      if(d==32) {
        m = m +1;
        d = 1;
    }
   }
   else if(m==4 || m==6 || m==9 || m==11){// esse tem 30 dias
    d = d+1;
    if(d==31){
        m = m +1;
        d = 1;
    }

   }
   else{// estamos em fevereiro: 28 ou 29 dias
       bool bissexto = true;
       if(a%4==0){
          if(a%100==0 && a%400!=0){
              bissexto = false;
          }
       }
       d = d+1;
       if(bissexto){  
        if(d==30){
            d = 1;
            m = m+1;
        }
       }
       else{
         if(d==29){
            d = 1;
            m = m+1;
         }
       }
   }
   if(m == 13){
     m = 1;
     a = a +1;
   }
   printf("%.2d-%.2d-%.4d\n", d,m,a);
}