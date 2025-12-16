#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex17.txt","r+");
    char c[4];
    int soma=0,i;
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }
    while(fscanf(arq,"%s",c)!= EOF)
    {
       i=atoi(c);
       soma+=i;
    }
    printf("Soma: %d",soma);

    fclose(arq);
return 0;
}

