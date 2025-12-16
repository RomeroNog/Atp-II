#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[30];
    char telefone[30];
    char email[50];
}Contato;

Contato leitura()
{
    Contato contac;
    printf("Digite seu nome: ");
    gets(contac.nome);
    fflush(stdin);

    printf("Digite seu telefone[(xx) xxxxx-xxxx]: ");
    gets(contac.telefone);
    fflush(stdin);

    printf("Digite seu email: ");
    gets(contac.email);

    printf("\n\n");

    return contac;
}
void imprimir(Contato cont)
{
    printf("Dados de contato: \n");
    printf("Nome: %s\n",cont.nome);
    printf("Telefone: %s\n",cont.telefone);
    printf("Email: %s\n",cont.email);
    printf("\n\n");
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Contato contac = leitura();
    imprimir(contac);

return 0;
}


