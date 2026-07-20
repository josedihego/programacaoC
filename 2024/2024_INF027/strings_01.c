#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int calc_tam_texto(char texto[]){
  int tam = 0;
  int i = 0;
  while(texto[i]!='\0'){
    tam = tam +1;
    i = i +1;
  }
  return tam;
}
int main(){
    char nome [30] = "Julio Jesus";
    char letra = 'A';
    printf("Nome= %s\n", nome);// imprime string %s
    printf("Letra= %c\n", letra);// imprime char %c
    
    printf("Tamanho do nome: %zu\n", strlen(nome));
    printf("Tamanho do nome com nossa função é: %d\n",
    calc_tam_texto(nome));
    char nome_douglas [30] = "Douglas Rodrigues";
    printf("tamanho nome douglas é: %d\n", calc_tam_texto(nome_douglas));

    

}