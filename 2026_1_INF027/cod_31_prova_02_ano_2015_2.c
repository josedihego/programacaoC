#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int N, B;

    printf("Informe o valor de N: ");
    scanf("%d",&N);
    bool brasileiro = false;
    B = 2;
    int N_copia = N;
    while (!brasileiro && B < N-1)
    {
      int resto = N_copia%B;
      N_copia = N_copia/B;
      bool brasileiro_nessa_base = true;
      while(N_copia!=0 && brasileiro_nessa_base==true){
            if(N_copia%B == resto){
                //tem chance de ser ainda NESSA base
                brasileiro_nessa_base = true;
            }
            else{
                // NÃO tem mais chance NESSA base
                brasileiro_nessa_base = false;
            }
            N_copia = N_copia/B;
      }
      if(brasileiro_nessa_base==true){
        brasileiro = true;
      }
        
    }
    if(brasileiro){
        printf("O número %d é brasileiro\n",N);
    }
    else{
        printf("O número %d NÃO é brasileiro\n",N);
    }
    
}