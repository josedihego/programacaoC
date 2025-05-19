#include<stdio.h>
#include<stdlib.h>

int main(){
    int angulo_hora;
    int angulo_minuto;
    printf("Informe o ângulo ponteiro horas:");
    scanf("%d",&angulo_hora);
    printf("Informe o ângulo do ponteiro de minutos:");
    scanf("%d",&angulo_minuto);
    int horas = angulo_hora/30;
    int minutos = angulo_minuto/6;
    printf("Horá é %d:%d\n",horas,minutos);
}