#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex22.txt","r");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    char c[30], palavra[30];
    int cont=0;

    printf("Digite a palavra para ver o número de ocorrências: ");
    gets(palavra);

    fflush(stdin);

    while(fscanf(arq,"%s",c)!=EOF)
    {
        if(strcmp(c,palavra)==0)
        {
            cont++;
        }
    }

    if(cont)
    {
        if(cont>1)
        {
            printf("A palavra %s aparece %d vezes no arquivo!\n",palavra,cont);
        }
        else
        {
            printf("A palavra %s aparece %d vez no arquivo!\n",palavra, cont);
        }
    }
    else
    {
        printf("A palavra %s não se encontra no arquivo!\n",palavra);
    }

    fclose(arq);
return 0;
}
