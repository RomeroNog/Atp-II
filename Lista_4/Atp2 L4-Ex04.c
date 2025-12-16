#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq1,*arq2;
    char c;


    arq1 = fopen("Atp2 L4-Ex04.txt","r");
    if (arq1 == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }

    arq2 = fopen("Atp2 L4-Ex04_.txt","w");
    if (arq2 == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }

    rewind(arq1);
    while(fscanf(arq1,"%c",&c)!= EOF)
    {
        fprintf(arq2,"%c",c);
    }
    printf("Dados foram copiados para outro arq!");



    fclose(arq1);
    fclose(arq2);
return 0;
}
