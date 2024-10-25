#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char nome[50];
    int telefone;
    char email[50];
}Contatos;

typedef struct{
    char name[50];
    int tel;
    char mail[50];
}Dados;

Contatos leitura()
{
    Contatos cont;

    printf("Digite o nome: ");
    gets(cont.nome);

    printf("Digite o telefone: ");
    scanf("%d",&cont.telefone);
    fflush(stdin);

    printf("Digite o email: ");
    gets(cont.email);
    fflush(stdin);

    printf("\n\n");

    return cont;
}
void imprimir(Dados info)
{
    printf("Dados de Contato: \n");
    printf("Nome: %s\n",info.name);
    printf("Telefone: %d\n",info.tel);
    printf("Email: %s\n",info.mail);
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Contatos cont = leitura();
    Dados info;

    strcpy(info.name,cont.nome);
    info.tel = cont.telefone;
    strcpy(info.mail,cont.email);

    imprimir(info);

return 0;
}
