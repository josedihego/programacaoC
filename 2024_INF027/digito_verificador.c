#include<stdio.h>
#include<stdlib.h>

int main(){
    int a1, a2, a3, a4;
    int dv;
    printf("Informe sua agência no formato XXXX:\n");
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    scanf("%d",&a4);
    int res_mult = a4*2 + a3*3 + a2 * 4 + a1 * 5;
    dv = 11 - res_mult%11;

    if(dv==10){
        printf("%d%d%d%d-X\n", a1, a2, a3, a4);
    }
    else{
        printf("%d%d%d%d-%d\n",a1, a2, a3, a4, dv);
    }

}