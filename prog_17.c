#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario
{
    char nome[40];
    char CPF[20];
    float salario;
};

void imprimir_fun(struct Funcionario *fun)
{
    printf("nome:%s\t", fun->nome);
    printf("CPF:%s\t", fun->CPF);
    printf("salário:%.2f\n", fun->salario);
}

struct Empresa
{
    char nome[40];
    char CNPJ[20];
    int numero_fun;
    struct Funcionario empregados[100];
};

void imprimir_emp(struct Empresa *emp)
{
    printf("nome:%s\t", emp->nome);
    printf("CNPJ:%s\n", emp->CNPJ);
    printf("Funcionários:\n");
    int i;
    for (i = 0; i < emp->numero_fun; i = i + 1)
    {
        imprimir_fun(&(emp->empregados[i]));
    }
}

int main(void)
{
    struct Empresa supermercado;
    strcpy(supermercado.nome, "Supermercado nota 10!");
    strcpy(supermercado.CNPJ, "12.345.678/0001-00");
    supermercado.numero_fun = 0;

    struct Funcionario junior;
    strcpy(junior.nome, "Francisco Júnior");
    strcpy(junior.CPF, "111.111.111-11");
    junior.salario = 5000;

    struct Funcionario josefa;
    strcpy(josefa.nome, "Josefa Sá");
    strcpy(josefa.CPF, "222.222.222-22");
    josefa.salario = 6000;

    supermercado.empregados[0] = junior;
    supermercado.numero_fun = supermercado.numero_fun + 1;
    supermercado.empregados[1] = josefa;
    supermercado.numero_fun = supermercado.numero_fun + 1;

    imprimir_emp(&supermercado);

    return 0;
}
