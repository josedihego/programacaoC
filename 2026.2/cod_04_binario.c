#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int qnt_zeros = 0;
    int qnt_uns = 0;
    printf("Informe o valor do número:");
    scanf("%d",&numero);
    printf("%d ",numero);
    if(numero>=0 && numero <=15){
        int bit1 = numero%2;
        numero = numero/2;
        int bit2 = numero%2;
        numero = numero/2;
        int bit3 = numero %2;
        numero = numero/2;
        int bit4 = numero%2;
        if(bit1==0){
            qnt_zeros = qnt_zeros +1;
        }
        else{
            qnt_uns = qnt_uns + 1;
        }
        if(bit2==0){    
            qnt_zeros = qnt_zeros +1;
        }
        else{
            qnt_uns = qnt_uns + 1;
        }
        if(bit3==0){    
            qnt_zeros = qnt_zeros +1;
        }
        else{
            qnt_uns = qnt_uns + 1;
        }
        if(bit4==0){    
            qnt_zeros = qnt_zeros +1;
        }
        else{
            qnt_uns = qnt_uns + 1;
        }
        printf(" tem %d zeros e %d uns. Binário(%d%d%d%d)\n", qnt_zeros, qnt_uns, bit4,bit3,bit2,bit1);
    }
    else{
        printf("Número informado é negativo ou possui mais de 4 bits. Tente novamente\n");
    }

}