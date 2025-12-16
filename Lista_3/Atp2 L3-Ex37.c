#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
}Cliente;

Cliente leitura()
{
    Cliente cliente;

    printf("Digite o nome do cliente: ");
    gets(cliente.nome);

    printf("Digite a idade do cliente: ");
    scanf("%d",&cliente.idade);

    fflush(stdin);

    printf("Digite o endereço do cliente: ");
    gets(cliente.endereco);

    fflush(stdin);
    printf("\n\n");

    return cliente;
}

void imprimir(Cliente cl)
{
    printf("Dados do fregues: \n");
    printf("Nome: %s\n",cl.nome);
    printf("Idade: %d\n",cl.idade);
    printf("Endereço: %s\n",cl.endereco);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Cliente cliente = leitura();
    imprimir(cliente);

return 0;
}

