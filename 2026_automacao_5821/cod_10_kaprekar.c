#include <stdio.h>
#include <stdlib.h>


int main(){
    int numero;//variavel que guarda o número
    printf("Informe um número de 4 dígitos:");// impressão
    scanf("%d",&numero);//leitura do numero
    int alg[4];// array de tamanho 4

    alg[0] = numero/1000;
    numero = numero%1000;
    alg[1] = numero/100;
    numero = numero%100;
    alg[2] = numero/10;
    alg[3] = numero%10;

    printf("pedaços %d-%d-%d-%d\n",alg[0],alg[1],alg[2],alg[3]);

    // agora vamos ordenar
    for(int a=0; a < 4; a = a+1){
        for(int b=0; b<4; b = b+1){
            if(alg[a] < alg[b]){
                int aux = alg[a];
                alg[a] = alg[b];
                alg[b] = aux;
            }
        }
    }
    printf("pedaços ordenados %d-%d-%d-%d\n",alg[0],alg[1],alg[2],alg[3]);
    
}
