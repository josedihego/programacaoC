#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main(){
    for(int i = 0; i < 100; i= i +1){
        printf("%d\n",i);
        sleep(1);
        //system("canberra-gtk-play --id='message-new-instant' &");
    }

}