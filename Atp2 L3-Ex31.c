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
    printf("Digite o nome do funcion�rio: ");
    gets(funcio.nome);
    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f",&funcio.salario);
    fflush(stdin);
    printf("Digite o departamento do funcion�rio: ");
    gets(funcio.departamento);
    printf("\n\n");
    return funcio;
}
void imprimir(Funcionario func)
{
    printf("Dados do funcion�rio: \n");
    printf("Nome: %s\n",func.nome);
    printf("Sal�rio: %.2f\n",func.salario);
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
