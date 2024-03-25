#include <stdio.h>
#include <stdlib.h>

int main(){
    const int i = 10;
    printf("valor de i = %d\n", i);
    int * pi = &i;
    // PERIGO: comportamento indefinido
    // não pague para ver!
    *pi = 30;
    printf("valor de i = %d\n", i);

}
