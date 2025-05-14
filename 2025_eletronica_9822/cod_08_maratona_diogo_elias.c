#include <stdio.h>
#include <stdlib.h>


int main(){
    int Vi = 5000;
    int f = 200;
    int dm = 42195;
    int d;
    for(d=50; Vi <= 42195; d=d+1){
        Vi = 5000 + (d * f);
        printf("d = %d, Vi = %d\n",d,Vi);
    }
    printf("Depois de %d dias o corredor corre uma maratona\n",d-1);
    printf("No dia %d ele percorre %d m 🏃 \n",d,Vi);
}