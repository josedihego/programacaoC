#include <stdio.h>
#include <stdlib.h>



int main(){
    int P, Q, R;
    printf("Informe o valor da porta P:");
    scanf("%d",&P);
    printf("Informe o valor da porta Q:");
    scanf("%d",&Q);
    printf("Informe o valor da porta R:");
    scanf("%d",&R);

    if(Q==1){
        if(P==1){
            printf("A\n");
        }
        else{
            printf("B\n");
        }
    }
    else{
        if(R==1){
            printf("C\n");
        }
        else{
            printf("D\n");
        }
    }

}