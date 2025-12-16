#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    char string[100];

    arq = fopen("Atp2 L4-Ex02.txt","r");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para leitura\n");
    }

    fgets(string,100,arq);
    printf("\n%s\n",string);

    fclose(arq);
return 0;
}
