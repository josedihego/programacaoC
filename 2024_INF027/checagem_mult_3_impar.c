#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 0; i <=1000; i = i +1){
        if(i%3==0 && i%2==1){
            printf("i= %d\n", i);
        }
    }
}