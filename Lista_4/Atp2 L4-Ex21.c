#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex21.bin","rb");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo aberto para manipulação\n");
    }

    int num;

    printf("Número do arquivo bin: \n");
    while(1)
    {
        fread(&num,sizeof(int),1,arq);
        if(feof(arq))
        {
            break;
        }
        printf("%d ",num);
    }

    int numero,cont=0,busca;

    printf("\nQual número deseja verificar se está no arquivo bin: ");
    scanf("%d",&busca);

    rewind(arq);

    while(1)
    {
        fread(&numero,sizeof(int),1,arq);
        if(feof(arq))
        {
            break;
        }
        if(numero == busca)
        {
            cont++;
        }
    }
    if(cont)
    {
        if(cont >1)
        {
            printf("O número %d está no arquivo e aparece %d vezes!\n",busca,cont);
        }
        else
        {
            printf("O número %d está no arquivo e aparece %d vez!\n",busca,cont);
        }
    }
    else
    {
        printf("O número %d não está presente no arquivo!\n",busca);
    }

    fclose(arq);
return 0;
}

