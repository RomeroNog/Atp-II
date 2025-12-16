#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex19.txt","r+");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }

    char c;

   if(fscanf(arq,"%c",&c)==EOF)
   {
        printf("O arquivo está vazio!\n");
   }
    else
    {
        printf("O arquivo não está vazio!\n");
    }


    fclose(arq);
return 0;
}

