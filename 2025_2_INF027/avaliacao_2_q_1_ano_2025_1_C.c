#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool e_primo(int n){
    bool primo = true;
    for(int d = 2; d < n; d = d+1){
        if(n%d==0){
            primo = false;
        }
    }
    return primo;
}

/** 
int main(){
    int x = 9;
    bool primo = e_primo(x);
    if(primo==true){
        printf("%d é primo\n",x);
    } 
    else{
        printf("%d não é primo\n",x);
    }
}
*/

int main(){
    int p;
    printf("Informe o número a ser testado: ");
    scanf("%d",&p);
    bool p_primo = e_primo(p);
    if(p_primo==true){
        bool p_2_primo = e_primo(p+2);
        if(p_2_primo==true){
            printf("O número é primo de Chen\n");
        }
        else{
            bool primo_chen = false;
            for(int a=2; a < p; a= a+1){
                for(int b=2; b < p; b = b+1){
                    if(a * b == p){
                        bool a_primo = e_primo(a);
                        bool b_primo = e_primo(b);
                        if(a_primo==true && b_primo==true){
                            primo_chen = true;
                        }
                    }
                }
            }
            if(primo_chen==true){
                printf("O número é primo de Chen\n");
            }
            else{
                printf("O número não é primo de Chen\n");

            }
        }
    }
    else{
        printf("Não é primo de Chen\n");
    }
}