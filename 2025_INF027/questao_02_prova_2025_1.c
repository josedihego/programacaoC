#include<stdio.h>
#include<stdlib.h>


int main(){
    int v, v1,v2,v3;
    int c1,c2,c3;
    printf("Informe um valor:");
    scanf("%d",&v);
    v3 = v%10;
    v = v/10;
    v2 = v%10;
    v = v/10;
    v1 = v%10;
    v= v/10;
    //printf("%d%d%d\n",v1,v2,v3);
    c1 = v3*100 + v2*10 + v1*1;
    c2 = v1*100 + v3*10 + v2*1;
    c3 = v2*100 + v1*10 + v3*1;
    int resultado = -1;
    if(c1%5==0){
        resultado = c1;
    }
    if(c2%5==0){
        if(c2>resultado){
            resultado = c2;
        }
    }
    if(c3%5==0){
        if(c3 > resultado){
            resultado = c3;
        }
    }
    printf("Resultado=%d\n",resultado);
}