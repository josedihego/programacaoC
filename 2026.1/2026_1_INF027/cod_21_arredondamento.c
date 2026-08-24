#include <stdio.h>
#include <stdlib.h>


int main(){

    float a = 0.2;
    int n = 5;
    float n_f = n * (1+a);
    if(n_f - ((int)n_f) > 0){
        n = n_f+1;
    }
    else{
        n = n_f;
    }

    printf("a = %.2f\n",a);
    printf("n_f = %.2f\n",n_f);
    printf("n = %d\n",n);


}