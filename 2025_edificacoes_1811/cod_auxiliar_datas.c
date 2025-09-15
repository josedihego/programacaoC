#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasAdicionar;
    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("=== CALCULADORA DE DATA ===\n\n");
    
    // Leitura da data inicial
    printf("Digite a data inicial:\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    
    // Leitura dos dias a adicionar
    printf("Digite o numero de dias a adicionar: ");
    scanf("%d", &diasAdicionar);
    
    // Adicionar os dias
    dia = dia + diasAdicionar;
    
    // Ajustar mês e ano se necessário
    while (dia > diasMes[mes-1]) {
        dia = dia - diasMes[mes-1];  // Subtrai os dias do mês atual
        mes = mes + 1;               // Vai para o próximo mês
        
        if (mes > 12) {              // Se passou de dezembro
            mes = 1;                 // Volta para janeiro
            ano = ano + 1;           // Incrementa o ano
        }
    }
    
    // Mostrar resultado
    printf("\nData final: %02d/%02d/%d\n", dia, mes, ano);
    
    return 0;
}