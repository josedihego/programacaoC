#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Considere uma máquina que produz
//dados durante o processo de fabricação
// esses dados podem variar entre -100 e 100
// porém somente os dados entre -50 e 50 devem
// ser considerados válidos para os cálculos
// Essa máquina produz 1 dado a cada 5 minutos
// portanto ela produz 24 * 60/5 (288) leituras por dia 
// seu programa deve permitir a consulta de leituras num dado dia para isso o usuário deve
// informar a hora, por exemplo 5:35 h
// deve informar o número de leituras válidas
// nas últimas 24 horas
// mostrar as N maiores leituras, onde N é definido pelo usuário
#define MAX 24* (60/5) // 24 horas com 12 leituras por hora
// uma leitura a cada 5 minutos
// MAX para 24 horas é 288  = (24*12)
int main(){
    srand(time(NULL));

    float leituras[MAX];
    for(int i=0; i < MAX; i = i +1){
        //scanf("%f", &leituras[i]); cansativo
        if(rand()%2==0){
            leituras[i] = rand()%101;
        }
        else{
              leituras[i] = -1 * rand()%101;
        }
    }
    for(int i=0; i < MAX; i = i +1){
        printf("leituras na posição %d tem %.2f\n",i,leituras[i]);
    }
    printf("\nFIM");
}