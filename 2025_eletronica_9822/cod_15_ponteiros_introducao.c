#include <stdio.h>
#include <stdlib.h>


int main(){
    int x = 40;
    printf("x = %d\n",x);
    int * px = &x;
    *px = 90;
    printf("x = %d\n",x);
}