#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex18.txt","r+");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }

    char c[5];
    int i,menor, maior;

    while(fscanf(arq,"%s",c)!=EOF)
    {
        i=atoi(c);
        menor = i;
        maior = i;
    }
    rewind(arq);

    while(fscanf(arq,"%s",c)!=EOF)
    {
        i=atoi(c);
        if(i<menor)
        {
            menor=i;
        }
        if(i>maior)
        {
            maior=i;
        }
    }
    printf("Maior número do txt: %d\n",maior);
    printf("Menor número do txt: %d\n",menor);

    fclose(arq);
return 0;
}

