#include <stdio.h>
#include <stdlib.h>

#define MARATONA 42000 // tamanho de uma maratona em metros
#define TAXA 0.05 // representa 5% como um número entre 0 e 1

int main(){
   // int maratona = 42000;
   float distancia = 5000;
   int sessao = 1;
   printf("sessão: %d - %.2f metros\n",sessao,distancia);
   while(distancia < MARATONA){
        sessao = sessao +1;
        //escolha entre as opções (A), (B) ou (C)
        //distancia = (distancia * (1 + TAXA))+500;//(A)
        distancia = (distancia * (1 + 0.05))+500;//(B)
        //distancia = distancia + 0.05 * distancia + 500;//(C)
        printf("sessão: %d - %.2f metros\n",sessao,distancia);
   }
   printf("Na sessão %d ela corre %.2f metros\n", sessao,distancia);


}