#include <stdio.h>
#include <stdlib.h>


int main(){
    int v;
    printf("Informe um valor inteiro: ");
    scanf("%d", &v);
    // se é par  OU se é menor que 2
    if((v%2==0 && v!=2) || v < 2){
        printf("%d NÃO é primo!\n", v);
    }
    else{
        int qnt_div = 0;
        for(int i = 2; i < v; i = i +1){
            if(v%i==0){
                qnt_div = qnt_div+1;
                printf("\t %d é divisível por %d\n",v,i);
            }
        }
        if(qnt_div==0){
            printf("%d é PRIMO\n", v);
        }
        else{
            printf("%d NÃO é primo!\n", v);
        }
    }
}