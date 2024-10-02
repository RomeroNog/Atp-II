#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char *strings[5];
    int k=1;

    for(int i=0;i<5;i++)
    {
        strings[i] = (char *)malloc(15*sizeof(char));
    }
    for(int i=0;i<5;i++)
    {
        if(strings[i]==NULL)
        {
            printf("ERRO");
            return 0;
        }
    }

    for(int i=0;i<5;i++,k++)
    {
        printf("Digite a %d palavra: ",k);
        gets(strings[i]);
    }

    k=1;

    for(int j=0;j<5;j++,k++)
    {
        printf("\n%d palvra digitada: %s",k,strings[j]);
    }

    for (int i=0;i<5;i++)
    {
        free(strings[i]);
    }

return 0;
}
