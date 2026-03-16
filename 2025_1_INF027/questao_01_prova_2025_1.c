#include<stdio.h>
#include<stdlib.h>


int main(){
    int t;
    int t1,t2,t3,t4;
    int d_grupo, d_bicho;
    printf("Informe o token:");
    scanf("%d",&t);
    t1 = t%10;
    t = t/10;
    t2=t%10;
    t=t/10;
    t3= t%10;
    t=t/10;
    t4=t%10;
    t= t/10;
    //printf("Dezena Grupo:%d%d\n",t4,t3);
    //printf("Dezena do Bicho:%d%d\n",t2,t1);
    d_grupo = t4*10+t3*1;
    d_bicho = t2*10+t1*1;
    if(d_bicho==0){
        d_bicho = 100;
    }

    int grupo_correto;
    if((d_bicho+4)%4==0){
        grupo_correto = (d_bicho+4)/4 -1;
    }
    else{
        grupo_correto = (d_bicho+4)/4;
    }
    if(d_grupo == grupo_correto){
        printf("VÁLIDO\n");
    }
    else{
        printf("INVÁLIDO\n");
    }
}