#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <math.h>
int main(){
    int valores [100];
    printf("Informe o primeiro valor:");
    scanf("%d",&valores[0]);
    bool repeticao = false;
    int cont = 0;
    while(repeticao==false){
        int proximo = pow(valores[cont]/10,2)+pow(valores[cont]%10,2);
        if(proximo >=100){
            proximo = proximo /2;
        }
        bool esta_contido = false;
        for(int i=0; i <= cont; i = i+1){
            if(valores[i]== proximo){
                esta_contido =  true;
            }
        }
        if(esta_contido== true){
            repeticao = true;
        }
    
        cont = cont +1;
        valores[cont] = proximo;
        
    }
    for(int i = 0; i <= cont ; i = i +1){
        printf("valor posição %d é %d\n",i, valores[i]);
    }
}