#include <stdio.h>
#include <unistd.h>

int main(){
    for(int i = 0; i < 10; i= i +1){
        printf("%d\n",i);
        sleep(1);
        printf("\a\a");
        fflush(stdout);
    }

}