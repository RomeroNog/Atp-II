#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char *strings[4];
    int k=1, vetor[4],n=0,w=0;

    for(int i=0;i<4;i++)
    {
        strings[i] = malloc(30*sizeof(char));
    }
    for(int i=0;i<4;i++)
    {
        if(strings[i]==NULL)
        {
            printf("ERRO");
            return 0;
        }
    }

    for(int i=0;i<4;i++,k++)
    {
        printf("Digite a %d palavra: ",k);
        gets(strings[i]);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;strings[i][j]!='\0';j++)
        {
            vetor[i] = j;
        }
    }

    for(int i=0;i<4;i++)
    {
        if(vetor[n]<vetor[i])
        {
            w= i;
        }
    }
    printf("A string de maior comprimento é: %s",strings[w]);


    for (int i=0;i<4;i++)
    {
        free(strings[i]);
    }

return 0;
}

