#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasAdicionar;
    
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
    
    // Ajustar mês e ano (todos os meses têm 30 dias)
    while (dia > 30) {
        dia = dia - 30;    // Subtrai 30 dias
        mes = mes + 1;     // Vai para o próximo mês
        
        if (mes > 12) {    // Se passou de dezembro
            mes = 1;       // Volta para janeiro
            ano = ano + 1; // Incrementa o ano
        }
    }
    
    // Mostrar resultado
    printf("\nData final: %02d/%02d/%d\n", dia, mes, ano);
    
    return 0;
}