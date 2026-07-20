#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    printf("Informe o valor do saque 🏧:");
    scanf("%d", &valor);
    int n100, n50, n20, n10, n5, n2, n1;
    
    n100 = valor/100;
    valor = valor %100;
    n50 = valor/50;
    valor = valor%50;
    n20 = valor/20;
    valor = valor%20;
    n10 = valor/10;
    valor = valor%10;
    n5 = valor/5;
    valor = valor%5;
    n2 = valor/2;
    valor = valor %2;
    n1 = valor;// caso ainda tenha resto
    //esse so poderá ser pago com notas de 1
    // e qualquer x%1 == 0
    if(n100>0) printf("🤑 notas de 100: %d\n",n100);
    if(n50>0) printf("🤑 notas de 50: %d\n",n50);
    if(n20>0) printf("🤑 notas de 20: %d\n",n20);
    if(n10>0) printf("🤑 notas de 10: %d\n",n10);
    if(n5>0) printf("🤑 notas de 5: %d\n",n5);
    if(n2>0) printf("🤑 notas de 2: %d\n",n2);
    if(n1>0) printf("🤑 notas de 1: %d\n",n1);
}