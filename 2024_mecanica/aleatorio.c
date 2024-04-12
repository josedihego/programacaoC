#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main(){
   srand(time(0));
   int n1, n2, resposta;
   for(int i = 0; i < 10; i = i +1){
        int aleatorio =  rand() % 101;
        printf("%d\n", aleatorio); 
        sleep(5);
   }
}