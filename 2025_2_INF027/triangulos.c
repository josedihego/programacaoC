#include<stdio.h>
#include<stdlib.h>

int main(){
    float lado1, lado2, lado3;
    printf("Informe o lado1: ");
    scanf("%f", &lado1);
    printf("Informe o lado2: ");
    scanf("%f", &lado2);
    printf("Informe o lado3:");
    scanf("%f", &lado3);

    if(lado1+lado2 > lado3 ||
        lado1+lado3 > lado2 ||
        lado2 + lado3 > lado1){
       printf("Temos um triângulo\n"); 
       if(lado1==lado2 && lado2==lado3){
        printf("Triângulo equilátero\n");
       }
       else{
            if(lado1!=lado2 && lado2!=lado3){
                printf("Triângulo escaleno\n");
            }
            else{
                printf("Triângulo isosceles\n");
            }
       }    

    }
    else{
        printf("Não temos um triângulo\n");
    }
}