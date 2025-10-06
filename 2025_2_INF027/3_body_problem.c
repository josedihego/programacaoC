#include <stdio.h>
#include <stdlib.h>


int main(){
    int n1, n2, n3;
    printf("Informe n1: ");
    scanf("%d",&n1);
    printf("Informe n2: ");
    scanf("%d",&n2);
    printf("informe n3: ");
    scanf("%d",&n3);
    int qnt = 0; // nesse ponto não sei nada ainda
    if(n1%2==0 && n1%5==0){
        qnt = qnt +1;
    }
    if(n2%2==0 && n2%5==0){
        qnt = qnt + 1;
    }
    if(n3%2==0 && n3%5==0){
        qnt = qnt +1;
    }
    if(qnt==2){
        printf("👍 SIM\n");
    }
    else{
        printf("👎 NÃO\n");
    }
}