#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a > b){
        b = a+1;
    }
    else{
        a = b+1;
    }
    printf("%d\n",a);
    printf("%d\n",b);
}