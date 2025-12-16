#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq1, *arq2;
    char c;

    arq1 = fopen("Atp2 L4-Ex10_01.bin","rb");
    if (arq1 == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }

    arq2 = fopen("Atp2 L4-Ex10_02.bin","wb");
    if (arq2 == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }
    rewind(arq1);
    while(!feof(arq1))
    {
        fread(&c,sizeof(char),1,arq1);
        fwrite(&c,sizeof(char),1,arq2);
    }


    fclose(arq1);
    fclose(arq2);
return 0;
}


