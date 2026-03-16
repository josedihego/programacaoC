#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(){
    int x, y, z;
    printf("Informe o valor de x:");
    scanf("%d",&x);
    printf("Informe o valor de y:");
    scanf("%d",&y);
    printf("Informe o valor de z:");
    scanf("%d",&z);
    bool maior_100 = x>100 || y>100 || z>100;
    bool dois_pares = (x%2==0 && y%2==0) || (x%2==0 && z%2==0) || (y%2==0 && z%2==0);
    bool divisivel = x%y==0 || y%x==0 || y%z==0 || z%y==0 || x%z==0 || z%x==0;
    if(maior_100 && dois_pares && divisivel){
        printf("Dos números informados sabemos que:\n");
        printf("\t Pelo menos dois são pares\n");
        printf("\t Pelo menos um é divisível por outro\n");
        printf("\t Pelo menos um é maior que 100\n");
    }
    else{
        printf("As seguintes condições não foram satisfeita:\n");
        if(!maior_100)
            printf("\t Pelo menos um é maior que 100\n");
        if(!dois_pares)
            printf("\t Pelo menos dois são pares\n");
        if(!divisivel)    
            printf("\t Pelo menos um é divisível por outro\n");
    }
}