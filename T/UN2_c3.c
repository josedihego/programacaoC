#include<stdio.h>
#include <stdlib.h>

int main(){
    int i = 5;
    int s = 0;
    for(int k=0; k < 5; k = k+1){
        s = s + i;
    }
    printf("s = %d", s);
}