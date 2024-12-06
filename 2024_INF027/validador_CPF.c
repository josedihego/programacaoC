#include<stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;
    int dv1, dv2;
    printf("Informe os 9 digitos de seu CPF:");
    scanf("%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    printf("Informe dos dois dígitos verificadores");
    scanf("%d%d",&dv1,&dv2);
    int dv1_calc = (n1 * (10-0) + n2 * (10-1)+
    n3 * (10-2) + n4 * (10-3) + n5 * (10-4)+
    n6 * (10-5) + n7 * (10-6) + n8 * (10-7)+
    n9 * (10-8)) % 11;
    if(dv1_calc < 2){
        dv1_calc = 0;
    }
    else{
        dv1_calc = 11 - dv1_calc;
    }
    // 061997794-95
    printf("Primeiro DV1 calculado é: %d\n", dv1_calc);
}