#include <stdio.h>
#include <stdlib.h>


int main(){
    int P, Q, R;
    printf("Informe P#Q#R nesse formato:");
    scanf("%d#%d#%d",&P,&Q,&R);
    if(Q==1 && P==1){
        printf("A\n");
    }
    else if(Q==1 && P==0){
        printf("B\n");
    }
    else if(Q==0 && R==1){
        printf("C\n");
    }
    else if(Q==0 && R==0){
        printf("D\n");
    }
    else{
        printf("CONFIGURAÇÃO INVÁLIDA\n");
    }


}