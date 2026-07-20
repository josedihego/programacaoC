#include<stdio.h>
#include<stdlib.h>

int main(){
    int q;
    float soma = 0;
    int apr = 0;
    float nota;
    printf("Informe a quantidade de alunos(as):");
    scanf("%d",&q);
    //int i = q-1; i >= 0; i = i -1
    //int i = q; i > 0; i = i -1
    //int i = 0; i < q; i = i +1
    //int i = 1; i <= q; i = i +1 
    for(int i = 1; i <= q; i = i +1){
        printf("Informe a nota n° %d:",i);
        scanf("%f",&nota);
        soma = soma + nota;
        if(nota >=7){
            apr = apr +1;
        }
    }
    printf("Média: %.2f\n", soma/q);
    printf("Percentagem aprovação %.2f%%\n",((apr*1.0)/q)*100);
}