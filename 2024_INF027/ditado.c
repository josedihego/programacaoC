#include<stdio.h>
#include<stdlib.h>

int main(){
   char ditado [10][20];
   for(int i = 0; i < 10; i = i +1){
    printf("Informe a palavra n° %d: ",i+1);
    fgets(ditado[i],20,stdin);
   }
   int vogas_por_palavra[10];
   for(int i =0; i < 10; i = i +1){
    int pos =0;
    int numero_vogais=0;
    char letra = ditado[i][pos];
    while(letra!='\0'){
        if(letra=='a' || letra == 'e' || 
        letra=='i' || letra=='o' || letra=='u'){
            numero_vogais = numero_vogais+1;
        }
        pos = pos +1;
        letra = ditado[i][pos];
    }
    vogas_por_palavra[i]=numero_vogais;
   }
   int posicao_maior =0;
   int maior = vogas_por_palavra[0];
   for(int i =0; i < 10; i = i +1){
    if(vogas_por_palavra[i] > maior){
        maior = vogas_por_palavra[i];
        posicao_maior = i;
    }
   }
   printf("Palavra com maior quantidade de vogais é %s. Esta palavra tem %d vogais.\n", ditado[posicao_maior],vogas_por_palavra[posicao_maior]);
}