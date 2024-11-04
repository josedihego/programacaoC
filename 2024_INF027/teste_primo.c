#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){
    int x;
    bool eh_primo = true;
    printf("Informe um valor x a ser analisado:");
    scanf("%d", &x);
    if(x>=2){
        if(x > 2){
            int i = 2;
            while(i < x && eh_primo){
                if(x%i==0) eh_primo = false;
                i = i+1;
            }
        }
    }
    else{
        eh_primo = false;
    }
    if(eh_primo){
        printf("O numero %d é primo :)\n", x);
    }
    else{
        printf("O número %d NÃO é primo :(\n",x);
    }
}