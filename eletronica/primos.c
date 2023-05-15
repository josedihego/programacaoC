#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29
bool e_primo(int v){
    if(v <=1) return false;
    if(v==2) return true;
    if(v%2==0) return false;
    for(int i =2; i < v; i = i +1){
        if(v%i==0) return false;
    }
    return true;
}

int main(){
    printf("%s\n", e_primo(41)? "PRIMO": "NÃO PRIMO");
}