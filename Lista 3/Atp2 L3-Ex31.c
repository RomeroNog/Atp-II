#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    float salario;
    char departamento[50];
}Funcionario;
Funcionario leitura()
{
    Funcionario funcio;
    printf("Digite o nome do funcionário: ");
    gets(funcio.nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f",&funcio.salario);
    fflush(stdin);
    printf("Digite o departamento do funcionário: ");
    gets(funcio.departamento);
    printf("\n\n");
    return funcio;
}
void imprimir(Funcionario func)
{
    printf("Dados do funcionário: \n");
    printf("Nome: %s\n",func.nome);
    printf("Salário: %.2f\n",func.salario);
    printf("Departamento: %s\n",func.departamento);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Funcionario funcio = leitura();
    imprimir(funcio);


return 0;
}
