#include<stdio.h>
#include<stdlib.h>
#include <math.h>

// vf =  vi + a * t
// delta = b² - 4 * a * c
int main(){
    float R = 8.314;
    float vf;
    float vi;
    float a;
    float t;
    printf("%s", "Informe a velocidade vi:");
    scanf("%f", &vi);
    printf("%s", "Informe a aceleração:");
    scanf("%f", &a);
    printf("%s", "Informe o valor do tempo:");
    scanf("%f", &t);
    vf = vi + (a * t);
    printf("Velocidade final %f m/s\n", vf);

   //float a, b, c;
   //float delta;
   //delta = pow(b,c) - (4 * a * c);
    
}
