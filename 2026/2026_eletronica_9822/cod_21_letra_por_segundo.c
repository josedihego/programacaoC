#include <stdio.h>
#include <unistd.h>


int main(){
    char texto [] = "Matrix is still alive...";
    
    int i = 0;

    while(texto[i]!='\0'){
        printf("%c",texto[i]);
        fflush(stdout);
        sleep(1);
        i = i +1;
    }

}