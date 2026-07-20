#include <stdio.h>
#include <stdlib.h>


/**
 * Crie um programa que recebe 3 inteiros
 * e informa se um deles é divisível pelos dois outros
 * 15 3 5 SIM
 * 46 2 7 NÃO
 * 3 15 5 SIM
 */

 int main(){
    int n1, n2,n3;
    printf("Informe três valores inteiros:");
    scanf("%d %d %d",&n1,&n2,&n3);
    //scanf("%d",&n1);
    // você poderia fazer um scanf para cada número

    //faremos os testes
    //primeiro teste: testar se n1 é divisível por n2 e n3
    if(n1%n2==0 && n1%n3==0){
        printf("SIM\n");
    }
    // segundo teste: testar se n2 é divisível por n1 e n3
    else if (n2%n1==0 && n2%n3==0){
        printf("SIM\n");
    }
    //terceiro teste: testar se n3 é divisível por n1 e n2
    else if(n3%n1==0 && n3%n2==0){
        printf("SIM\n");
    }
    else{
        printf("NÃO\n");
    }


 }