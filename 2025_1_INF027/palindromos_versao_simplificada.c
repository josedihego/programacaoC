#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    char texto [50];
    printf("Informe o texto>>");
    scanf("%s",texto);

    int i = 0;
    while(texto[i] != '\0'){
        i = i +1;
    }
    int meio = i/2;
    bool eh_palindromo = true;
    for(int j =0; j <meio; j = j+1){
        if(texto[j] != texto[i-j-1]){
            eh_palindromo = false;
        }
    }
   if(eh_palindromo==true){
        printf("A palavra %s é palindromo\n", texto);
    }
    else{
        printf("A palavra %s não é palindromo\n",texto);
    }


}