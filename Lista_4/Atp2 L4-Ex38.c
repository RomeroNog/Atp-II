#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void criar_arquivo(char criacao[]);
void escrita_arquivo(char escrevendo[]);
void leitura_arquivo();
void deletar_arquivo(char del[]);
void renomear_arquivo(char old_name[],char new_name[]);
int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("Operações de arquivo: \n");
    printf("1-Criar arquivo txt\n");
    printf("2-Escrever em um arquivo txt\n");
    printf("3-Ler o conteúdo de um arquivo txt\n");
    printf("4-Apagar o arquivo txt\n");
    printf("5-Renomear o arquivo txt\n");
    printf("6-Sair\n");

    int operacao;
    do{
        printf("Qual operação deseja realizar? ");
        scanf("%d",&operacao);

        FILE *arq = fopen("Atp2 L4-Ex38.txt","r+");
        if(arq == NULL)
        {
            printf("Erro!\n");
        }
        fprintf(arq,"Arquivo disponível para manipulação!\n");


        char criar[30];
        char escrita[200];
        char novo_nome[50];
        char deletar[30];
        char nome_antigo[40] = "txt_renomear.txt";

        fflush(stdin);
        switch(operacao)
        {
            case 1:
                printf("Digite o nome do arquivo que deja criar: ");
                gets(criar);
                criar_arquivo(criar);
                break;

            case 2:
                printf("Digite algo para escrever no txt original: ");
                fgets(escrita,sizeof(escrita),stdin);
                escrita_arquivo(escrita);
                break;

            case 3:
                leitura_arquivo();
                break;

            case 4:
                printf("Digite o nome do arquivo que deseja excluir: ");
                gets(deletar);
                deletar_arquivo(deletar);
                break;

            case 5:
                printf("Digite o novo nome para o arquivo: ");
                gets(novo_nome);
                int tam = strlen(novo_nome);
                novo_nome[tam] = '\0';
                renomear_arquivo(nome_antigo,novo_nome);
                break;

            case 6:
                printf("Você saiu!\n");
                return 0;
                break;

            default:
                printf("Não há essa operação!\n");
                break;
        }
        fclose(arq);
    }while(operacao!=6);


return 0;
}
void criar_arquivo(char criacao[])
{
    char nome_inteiro[100];

    strcpy(nome_inteiro,criacao);
    strcat(nome_inteiro,".txt");
    FILE *criar_ = fopen(nome_inteiro,"w");
    fclose(criar_);
    printf("Arquivo criado com sucesso!\n");
}
void escrita_arquivo(char escrevendo[])
{
    FILE *escri = fopen("Atp2 L4-Ex38.txt","r+");
    fseek(escri,0,SEEK_END);
    fprintf(escri,"%s\n",escrevendo);
    fclose(escri);
    printf("Escrita realizada com sucesso!\n");
}
void leitura_arquivo()
{
    printf("\nConteudo do txt: \n");
    FILE *ler = fopen("Atp2 L4-Ex38.txt","r");
    char c;
    while(fscanf(ler,"%c",&c)!=EOF)
    {
        printf("%c",c);
    }
    fclose(ler);
}
void deletar_arquivo(char del[])
{
    FILE *arq = fopen(del,"w");
    remove(del);
    printf("Arquivo excluído com sucesso!\n");
}
void renomear_arquivo(char old_name[],char new_name[])
{

    strcat(new_name,".txt");
    FILE *arq = fopen(old_name,"w");
    fclose(arq);
    rename(old_name,new_name);
    printf("Arquivo renomeado com sucesso!\n");
}
