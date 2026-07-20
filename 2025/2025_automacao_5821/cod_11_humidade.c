#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>

int main(){
    srand(time(NULL));
    float leituras[144];
    for(int p = 0; p < 144; p = p+1){
        printf("Informe a leitura de umidade n° %d:\n",p);
        //scanf("%f",&leituras[p]);
        // uma mensagem qualquer
        leituras[p] = rand()%101;
        printf("Valor lido é: %.2f\n", leituras[p]);

    }
}