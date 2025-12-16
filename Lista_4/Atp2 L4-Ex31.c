#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
void gerar_arquivos();
int calc_diretorio();
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    gerar_arquivos();

    int tamanho_diretorio = calc_diretorio();
    printf("Tamanho do diretório: %d bytes\n",tamanho_diretorio);

return 0;
}
void gerar_arquivos()
{
    char diretorio[30] = "D:\\Atp2\\teste\\";
    char arquivo[5][30] = {{"arq1.txt"},{"arq2.txt"},{"arq3.txt"},{"arq4.txt"},{"arq5.txt"}};

    char cria_arq[40];

    for(int i=0;i<5;i++)
    {
        strcpy(cria_arq,diretorio);
        strcat(cria_arq,arquivo[i]);
        FILE *arq = fopen(cria_arq,"w");
        for(int j=0;j<10;j++)
        {
            int num = rand()%10;
            fprintf(arq,"%d",num);
        }
        fclose(arq);
    }
}
int calc_diretorio()
{
    char diretorio[30] = "D:\\Atp2\\teste\\";
    char arquivo[5][30] = {{"arq1.txt"},{"arq2.txt"},{"arq3.txt"},{"arq4.txt"},{"arq5.txt"}};

    char cria_arq[40];

    int tam=0,cont;
    char c;

    for(int i=0;i<5;i++)
    {
        cont=0;
        strcpy(cria_arq,diretorio);
        strcat(cria_arq,arquivo[i]);

        FILE *arq = fopen(cria_arq,"r");

        while(fscanf(arq,"%c",&c)!=EOF)
        {
            cont++;
        }
        tam+=cont;

        fclose(arq);
    }
    return tam;
}
