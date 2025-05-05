#include <stdio.h>
#include <stdlib.h>


int main(){
    int s1 = 9;
    int d1 = 1;
    int d1_c = d1;
    int op1 = 0, op2 = 0;
    for(int i = d1; d1!=s1; i =  i +1){
        d1 = (d1 + 1) % 10;
        op1 = op1 + 1;
    }
    for(int i = s1; s1 != d1_c; i = i +1){
        s1 = (s1 +1) % 10;
        op2 = op2 + 1;
    }
    printf("op1 = %d\n", op1);
    printf("op2 =  %d\n", op2);
    

}