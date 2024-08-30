#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

#define QNT 7

int main(){
    int medidas[QNT];
    for(int i =0; i < QNT ; i = i +1){
        printf("Informe a médida n° %d: ",i+1);
        scanf("%d", &medidas[i]);
    }
}