#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq1,*arq2,*arq3;
    char c;

    arq1 = fopen("Atp2 L4-Ex05_01.txt","r");
    if(arq1 == NULL)
    {
        printf("Não foi posssível executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }
    arq2 = fopen("Atp2 L4-Ex05_02.txt","r");
    if(arq2 == NULL)
    {
        printf("Não foi posssível executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    arq3 = fopen("Atp2 L4-Ex05_03.txt","w+");
    if(arq3 == NULL)
    {
        printf("Não foi posssível executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    while(fscanf(arq1,"%c",&c)!=EOF)
    {
        fprintf(arq3,"%c",c);
    }
    while(fscanf(arq2,"%c",&c)!=EOF)
    {
        fprintf(arq3,"%c",c);
    }
    printf("Dados passados!\n");


    rewind(arq3);
    while(fscanf(arq3,"%c",&c)!=EOF)
    {
        printf("%c",c);
    }


    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
return 0;
}
