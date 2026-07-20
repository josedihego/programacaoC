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

    float lado_maior;
    float soma_demais;
    //NOVO
    if(lado1 > lado2 && lado1 > lado3){
        lado_maior = lado1;  // significa recebe (atribuição)
        soma_demais = lado2+lado3;
    }
    else{
        if(lado2 > lado3){
            lado_maior = lado2;
            soma_demais = lado1 + lado3;
        }
        else{
            lado_maior = lado3;
            soma_demais = lado1+lado2;
        }
    }
    //NOVO


    if(soma_demais > lado_maior){
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