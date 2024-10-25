#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_FUNCIONARIO 2

typedef struct{
    char nome[50];
    int codigo;
    char setor[40];
}Funcionario;
Funcionario* leitura()
{
    Funcionario* pessoa = malloc(NUM_FUNCIONARIO*sizeof(Funcionario));
    if(pessoa == NULL)
    {
        printf("N�o foi poss�vel alocar!");
        return 0;
    }
    for(int i=0;i<NUM_FUNCIONARIO;i++)
    {
        printf("Funcion�rio %d: \n",i+1);
        printf("Digite o nome do funcion�rio: ");
        gets(pessoa[i].nome);

        printf("Digite o c�digo do funcion�rio: ");
        scanf("%d",&pessoa[i].codigo);

        fflush(stdin);

        printf("Digite o setor do funcion�rio: ");
        gets(pessoa[i].setor);

        fflush(stdin);
        printf("\n\n");
    }
    return pessoa;
}
void imprimir(Funcionario* f)
{
    for(int i=0;i<NUM_FUNCIONARIO;i++)
    {
        printf("Dados do funcion�rio %d: \n",i+1);
        printf("Nome: %s\n",f[i].nome);
        printf("C�digo: %d\n",f[i].codigo);
        printf("Setor: %s\n",f[i].setor);
        printf("\n\n");
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Funcionario* pessoa = leitura();
    imprimir(pessoa);

    free(pessoa);
return 0;
}
