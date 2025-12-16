#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_CONTATOS 2
typedef struct{
    int telefone;
    char nome[24];
}Contatos;
void add_contato(Contatos add);
void del_contato(int deletando,int quantidade);
void busca_contato(char name[]);
int main()
{
    setlocale(LC_ALL,"Portuguese");

    Contatos* lista = malloc(NUM_CONTATOS*sizeof(Contatos));

    lista[0].telefone = 345676358;
    strcpy(lista[0].nome,"Igor");

    lista[1].telefone = 8579462;
    strcpy(lista[1].nome,"Cauan");

    FILE *arq = fopen("Atp2 L4-Ex37.txt","r+");
    if(arq == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    for(int i=0;i<NUM_CONTATOS;i++)
    {
        fprintf(arq,"%d %s\n",lista[i].telefone,lista[i].nome);
    }
    fflush(stdin);
    fclose(arq);


    char caracter_add;
    printf("Deseja adicionar algum contato?(s ou n) ");
    scanf("%c",&caracter_add);

    if(caracter_add == 's')
    {
        Contatos novo;

        printf("Adicionando Contatos:\n");
        printf("Digite o número: ");
        scanf("%d",&novo.telefone);

        fflush(stdin);
        printf("Digite o nome: ");
        gets(novo.nome);

        add_contato(novo);
    }

    fflush(stdin);
    char caracter_del;
    printf("Deseja deletar algum contato?(s ou n) ");
    scanf("%c",&caracter_del);

    if(caracter_del == 's')
    {
        FILE *leitura = fopen("Atp2 L4-Ex37.txt","r");

        int cont = 0;
        Contatos deletar;
        while (fscanf(leitura,"%d %s",&deletar.telefone,deletar.nome)!=EOF)
        {
            cont++;
        }
        fclose(leitura);

        int delet;

        printf("Digite o contato que deseja deletar(0-%d): ",cont-1);
        scanf("%d",&delet);

        del_contato(delet,cont);
    }
    fflush(stdin);
    char caracter_busca;

    printf("Deseja procurar algum contato?(s ou n) ");
    scanf("%c",&caracter_busca);
    fflush(stdin);
    if(caracter_busca == 's')
    {
        char nome_busca[24];
        printf("Digite o nome do contato que deseja buscar: ");
        gets(nome_busca);

        busca_contato(nome_busca);
    }
    free(lista);
return 0;
}
void add_contato(Contatos add)
{
    FILE *adiciona = fopen("Atp2 L4-Ex37.txt","r+");

    fseek(adiciona,0,SEEK_END);
    fprintf(adiciona,"%d %s\n",add.telefone,add.nome);

    printf("Contato adicionado com sucesso!\n");

    fclose(adiciona);
}
void del_contato(int deletan,int quantidade)
{
    Contatos* deletando = malloc(quantidade*sizeof(Contatos));
    Contatos aux;
    FILE *del1 = fopen("Atp2 L4-Ex37.txt","r");

    for(int i=0;i<quantidade;i++)
    {
        fscanf(del1,"%d %s",&deletando[i].telefone,deletando[i].nome);
    }

    aux = deletando[deletan];
    deletando[deletan] = deletando[quantidade-1];
    deletando[quantidade-1] = aux;

    fclose(del1);

    FILE *del2 = fopen("Atp2 L4-Ex37.txt","w");

    for(int i=0;i<=quantidade-2;i++)
    {
        fprintf(del2,"%d %s\n",deletando[i].telefone,deletando[i].nome);
    }
    printf("Contato deletado com sucesso!\n");

    fclose(del2);
    free(deletando);
}
void busca_contato(char name[])
{
    FILE *busca = fopen("Atp2 L4-Ex37.txt","r");
    Contatos buscando;
    int verif=0;

    while(fscanf(busca,"%d %s",&buscando.telefone,buscando.nome)!=EOF)
    {
        int compara = strcmp(buscando.nome,name);
        if(compara == 0)
        {
            printf("Contato desejado: \n");
            printf("Nome: %s\n",buscando.nome);
            printf("Telefone: %d\n",buscando.telefone);
            verif++;
        }
    }
    if(!verif)
    {
        printf("Esse nome não se encontra em sua lista de contatos!\n");
    }
    fclose(busca);
}
