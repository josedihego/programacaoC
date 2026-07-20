#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<time.h>

int main(){
    srand(time(NULL));

    float leituras [144];

    for(int p = 0; p < 144; p = p +1){
        printf("Informe a leitura n° %d:\n", p+1);
        //scanf("%f",&leituras[p]);
        leituras[p] = rand()%101 + (rand()%101)/100.0;
        printf("valor informado: %.2f\n", leituras[p]);
    }
}