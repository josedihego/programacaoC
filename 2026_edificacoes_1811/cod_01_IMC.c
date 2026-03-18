#include <stdio.h>
#include <stdlib.h>

int main(){
    float massa = 51.65;
    float altura = 1.68;
    float IMC = massa/(altura * altura);
    printf("seu IMC é: %f\n",IMC);
}
