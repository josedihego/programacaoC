#include <stdio.h>
#include <stdlib.h>


int main(){
    int M, P, D;
    printf("Informe os valores de M (tamanho da avenida), P(distância entre pontos ônibus) e D (distância da escola):\n");
    printf("\tM = ");
    scanf("%d",&M);
    printf("\tP = ");
    scanf("%d",&P);
    printf("\tD = ");
    scanf("%d",&D);
    int n_p1 = D/P + 1;
    int n_p2 = n_p1+1;
    printf("Paradas para escolher: essa %d ou essa %d\n",n_p1, n_p2);

    int caminhada1 = (n_p1-1) * P;
    int caminhada2 = (n_p2-1) * P;

    if(D-caminhada1 < caminhada2-D){
        printf("Caminhe do início da avenida para o final da avenida %d metros e desça no ponto %d\n",D-caminhada1, n_p1);
    }
    else{
        printf("Caminhe do final da avenida para o ínicio da avenida %d metros e desça no ponto %d\n", caminhada2-D, n_p2);
    }


}