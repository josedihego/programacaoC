#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(){
    float a, b, c;
    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de b: ");
    scanf("%f",&b);
    printf("Informe o valor de c: ");
    scanf("%f",&c);
    if(a+b > c && a+c > b && c+b>a){
        if(a==b && b==c){
            printf("Triângulo equilátero\n");
        }
        else if(a!=b && b!=c && c!=a){
            printf("Triângulo escaleno\n");
        }
        else{
            printf("Triângulo Isosceles\n");
        }
    }
    else{
        printf("Esses lados não formam um triângulo :( \n");
    }
}