#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq1 = fopen("Atp2 L4-Ex26_01.txt","r");
    if (arq1 == NULL)
    {
        printf("Erro ao executá-lo");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    FILE *arq2 = fopen("Atp2 L4-Ex26_02.txt","r");
    if (arq2 == NULL)
    {
        printf("Erro ao executá-lo");
        return 0;
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    char a1,a2;
    printf("As diferenças serão '_':\n");
    while(fscanf(arq1,"%c",&a1)!=EOF)
    {
        fscanf(arq2,"%c",&a2);
        if(a1 == '\n')
        {
            printf("\n");
        }
        if(a1 != a2)
        {
            printf("_");
        }
        else
        {
            printf("%c",a1);
        }
    }

    fclose(arq1);
    fclose(arq2);
return 0;
}
