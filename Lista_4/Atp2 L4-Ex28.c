#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct{
    char letra;
    int freq;
}Tipos;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq = fopen("Atp2 L4-Ex28.bin","rb+");
    if (arq == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }


    int array[30],contador=0;
    char string[50],ocorre[50];

    strcpy(string,"AAA BBB ddd cc eeefffgggjjjjiiiiklmiop");

    int cont = strlen(string);

    fwrite(string,sizeof(char),cont,arq);

    int k=0;
    for(int i=0;i<cont;i++)
    {
        contador=1;
        while(string[i]==string[i+1])
        {
            contador++;
            i++;
        }
        ocorre[k] = string[i];
        array[k] = contador;
        k++;
    }
    for(int i=0;ocorre[i]!='\0';i++)
    {
        printf("%c  %d\n",ocorre[i],array[i]);
    }
    Tipos teste[k];


    for(int i=0;i<k;i++)
    {
        teste[i].letra = ocorre[i];
        teste[i].freq = array[i];
    }
    FILE *arq2 = fopen("Atp2 L4-Ex28_01.bin","wb");
    if (arq2 == NULL)
    {
        printf("Erro ao executá-lo");
    }
    else
    {
        printf("Arquivo disponível para manipulação!\n");
    }

    for(int t=0;t<k;t++)
    {
        fwrite(&teste[t],sizeof(Tipos),1,arq2);
    }


    fclose(arq);
    fclose(arq2);
return 0;
}
