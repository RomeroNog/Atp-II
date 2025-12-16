#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq;
    char string[1000];
    int cont=0;
    char c;

    arq = fopen("Atp2 L4-Ex03.txt","r");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para leitura\n");
    }

    while(fscanf(arq, "%c", &c) != EOF)
    {
        if(     c == '\n')
        {
            cont++;
        }
    }
    printf("\nNúmero de linhas do txt: %d\n",cont+1);


    fclose(arq);
return 0;
}
