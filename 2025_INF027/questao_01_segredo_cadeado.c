#include <stdio.h>
#include <stdlib.h>


int main(){
    int s1, s2, s3; // s de segredo do cadeado
    int d1, d2, d3;// d de display do cadeado
    printf("Informe o segredo:");
    scanf("%d#%d#%d", &s1, &s2, &s3);
    printf("Informe o que esta sendo mostrado no cadeado:");
    scanf("%d#%d#%d", &d1, &d2, &d3);
    int op1 , op2;
    int total = 0;
    if(s1 > d1){
        op1 = s1 - d1;
    }
    else{
        op1 = d1 - s1;
    }
    op2 = 10 - op1;

    if(op1 < op2){
        total = total + op1;
    }
    else{
        total = total + op2;
    }

    if(s2>d2){
        op1 = s2 - d2;
    }
    else{
        op1 = d2-s2;
    }
    op2 = 10 - op1;
    if(op1 < op2){
        total = total + op1;
    }
    else{
        total = total + op2;
    }
    if(s3 > d3){
        op1 = s3 - d3;
    }
    else{
        op1 = d3 - s3;
    }
    op2 = 10 - op1;
    if(op1 < op2){
        total = total + op1;
    }
    else{
        total = total + op2;
    }

    printf("Quantidade mínima de movimento é %d\n", total);


}