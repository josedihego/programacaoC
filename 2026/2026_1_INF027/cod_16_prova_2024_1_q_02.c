#include<stdio.h>
#include<stdlib.h>

int main(){
    int atual1,atual2,atual3;
    int senha1, senha2, senha3;
    int soma_distancias = 0;
    printf("Informe o código atual: ");
    scanf("%1d%1d%1d",&atual1,&atual2,&atual3);
    printf("informe a senha: ");
    scanf("%1d%1d%1d",&senha1,&senha2,&senha3);
    int dist1;
    if(atual1 > senha1){
        dist1 = atual1-senha1; 
    }
    else{
        dist1 = senha1-atual1;
    }
    int dist2 = 10 - dist1;
    if(dist1 <dist2){
        soma_distancias = soma_distancias + dist1;
    }
    else{
        soma_distancias = soma_distancias + dist2;
    }
    printf("Distância mínima é %d\n",soma_distancias);

}