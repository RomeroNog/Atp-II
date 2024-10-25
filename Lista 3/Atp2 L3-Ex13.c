#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    float salario;
    char departamento[20];
}Funcionario;
Funcionario leitura()
{
    Funcionario clt;
    printf("Digite o nome do funcionário: ");
    gets(clt.nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f",&clt.salario);
    fflush(stdin);
    printf("Digite o nome do departamento: ");
    gets(clt.departamento);
    fflush(stdin);
    printf("\n\n");
    return clt;
}
void imprimir(Funcionario c)
{
    printf("Dados do funcionário: \n");
    printf("-Nome: %s\n",c.nome);
    printf("-Salário: %.2f\n",c.salario);
    printf("-Departamento: %s\n",c.departamento);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Funcionario clt;
    clt = leitura();
    imprimir(clt);

return 0;
}
