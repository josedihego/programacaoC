#include <stdio.h>
#include <stdlib.h>

int main(){
    float m = 55;
    float a = 1.90;
    float imc = m/(a * a);
    printf("seu IMC é: %.1f\n", imc);
}