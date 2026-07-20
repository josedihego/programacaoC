#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int calc_raiz(int x, int y, int z){
    int res = 3 * (x*x)+ 2 *(y*y*y) - 7*(z*z);
    return res;
}
int main(){
   
    for(int x=0; x <= MAX ; x = x+1){
        for(int y=0; y <= MAX; y = y+1){
            for(int z=0; z <= MAX; z = z+1){
                if (calc_raiz(x,y,z)==0){
                    printf("achei para x=%d, y=%d, z=%d\n",x,y,z);
                }
            }
        }
    }
}