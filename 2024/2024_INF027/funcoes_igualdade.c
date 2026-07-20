#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
  int x = 0;
  int cont = 0;
  for(x = -1000; x <= 1000 ; x = x +1){
    int fx = (x * x) + (2 * x) + 1;
    int gx = (3 * x) + 7;
    if(gx == fx){
        cont = cont + 1;
        printf("x = %d\n", x);
    }
  }
  printf("Portanto existem %d valores que satisfazem a igualdade\n",cont);
}