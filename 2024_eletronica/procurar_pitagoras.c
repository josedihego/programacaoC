#include<stdio.h>
#include<stdlib.h>

int main(){
    for(int a = 1; a < 1001; a = a+1){
        for(int b = 1; b < 1001; b = b+1){
            for(int c = 1; c < 1001; c = c+1){
                if(c*c == ((a*a) + (b*b))){
                    printf("Triangulo retângulo encontrado para a=%d, b=%d, c = %d\n", a,b,c);
                }
            }
        }
    }
}