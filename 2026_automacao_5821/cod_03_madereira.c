#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio, comprimento;
    float volume_final, volume_desperdicio;
    float volume_cilindro;
    printf("Informe o raio do cilíndro: ");
    scanf("%f",&raio);
    printf("Informe o comprimento do cilíndro: ");
    scanf("%f",&comprimento);
    volume_cilindro = 3.14 * raio * raio * comprimento;
    volume_final = 2 * raio * raio * comprimento;
    volume_desperdicio = volume_cilindro- volume_final;
    printf("Volume final paralelepípedo: %.2f cm³\n", volume_final);
    printf("Volume do desperdício: %.2f\n cm³",volume_desperdicio);

    
}