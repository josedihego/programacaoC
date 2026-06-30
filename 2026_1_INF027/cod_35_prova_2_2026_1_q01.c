#include <stdio.h>
#include<stdlib.h>

#define DOSE 800
#define TOXICO 1520
#define DECAIMENTO 6
#define TEMPO_DOSE 6

int main(){

    float dose_organismo = DOSE; // antes de tomar qualquer coisa
    int horas = 0;
    while(dose_organismo < TOXICO){
      //1. coisa dimunir dosagem pela mentada
      dose_organismo = dose_organismo/2;
      //2. tomar nova dose
      dose_organismo = dose_organismo + DOSE;  
      horas = horas + TEMPO_DOSE;
    }
    printf("Dose tóxica atingida depois de %d horas\n", horas);

}