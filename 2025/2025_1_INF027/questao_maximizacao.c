#include <stdio.h>
#include <stdlib.h>


int main(){
    int A, B;
    int a1,a2,a3;
    int b1,b2,b3;
    printf("Informe o valor de A entre 0 e 999: ");
    scanf("%d",&A);
    printf("Informe o valor de B entre 0 e 999: ");
    scanf("%d",&B);
    // quebra de A em partes
    a1 = A % 10;
    A = A/10;
    a2 = A % 10;
    A = A/10;
    a3 = A % 10;
    printf("a1 = %d, a2 = %d, a3 = %d \n", a1, a2, a3);
    // quebra de B em partes
    b1 = B % 10;
    B = B/10;
    b2 = B % 10;
    B = B/10;
    b3 = B%10;
    printf("b1 = %d, b2 = %d, b3= %d\n", b1, b2, b3);

    A = 0;
    B = 0;
    if(b1 < a1 && b2 < a2 && b3 < a3){
        B = -1;
        printf("(%d%d%d, %d)\n", a3,a2,a1, B);
    }
    else if(a1 < b1 && a2 < b2 && a3 < b3){
        A = -1;
        printf("(%d, %d%d%d)\n", A, b3,b2,b1);
    }
    else{
      printf("(");
      if(a3 >= b3){
        printf("%d",a3);
      }
      if(a2>=b2){
        printf("%d",a2);
      }
      if(a1>=b1){
        printf("%d",a1);
      }
      printf(" e ");
      if(b3>=a3){
        printf("%d",b3);
      }
      if(b2>=a2){
        printf("%d",b2);
      }
      if(b1>=a1){
        printf("%d",b1);
      }
      printf(")");
    
    }
    
    


}