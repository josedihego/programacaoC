#include <stdio.h>
#include <stdlib.h>

double last = 0;
double pelast = 1;
double numerador = 0;
double denominador = 0;
double media = 0;

int main(void) {
  while(denominador <2 || last != pelast){
    pelast = last;
    printf("%s", "\nmanda numero ai\n\n");
    scanf("%lf", &last);
    numerador = numerador + last;
    denominador++;
  }
  media = numerador / denominador;
  printf("a média é %lf", media);
  return 0;
}