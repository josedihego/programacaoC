#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool e_par(int numero){
    if(numero%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
  int  n = 0;
  int qnt =  100;

  while(qnt > 0){
    if( e_par(n)){
        printf("%d\n", n);
        qnt = qnt -1;
    }
    n = n+1;
   
  }

}

