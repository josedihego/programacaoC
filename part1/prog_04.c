#include <stdio.h>
void trocar(int *pa, int *pb) {   
  int t = *pa;                 
  *pa = *pb;                   
  *pb = t;                     
  printf("trocar = %d, b = %d\n", *pa, *pb);   

}
int main(void) {
  int a = 12;                 
  int b = 15;                  
  trocar(&a, &b);
  printf("main = %d, b = %d\n", a, b);   
  return 0;
}