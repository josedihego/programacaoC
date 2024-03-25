#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 0; i < 10000; i = i +1){
        printf("%d\n", i * 2);
    }
}