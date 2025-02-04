#include <stdio.h>
#include <stdlib.h>

#define NUMERO_PARTIDAS 5
#define TAM_JANELA 3

int max(int n1, int n2, int n3){
    int maior;
    if(n1>n2 && n1 > n3){
        maior = n1;
    }
    else{
        if(n2>n3){
            maior = n2;
        }
        else{
            maior = n3;
        }
    }
    return maior;
}

int min(int n1, int n2, int n3){
    int menor;
    if(n1 < n2 && n1 < n3){
        menor = n1;
    }
    else{
        if(n2 < n3){
            menor = n2;
        }
        else{
            menor = n3;
        }
    }
    return menor;
}

int main(){
    int gols[NUMERO_PARTIDAS];
    for(int i = 0 ; i < NUMERO_PARTIDAS; i = i+1){
        printf("Informe o número de gols da partida n° %d: ",i+1);
        scanf("%d",&gols[i]);
    }

    int resultado = min(gols[0], gols[1], gols[2])+
                    max(gols[0], gols[1], gols[2])+
                    min(gols[1], gols[2], gols[3])+
                    max(gols[1], gols[2], gols[3])+
                    min(gols[2], gols[3], gols[4])+
                    max(gols[2], gols[3], gols[4]);
    printf("Pontuação é: %d\n", resultado);

}