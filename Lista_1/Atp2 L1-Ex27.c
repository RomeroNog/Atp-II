#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char str[20],strinvertida[20];
    int tamanho_str=0,aux,comparativo=0;

    printf("Digite uma palavra: ");
    gets(str);

    for(int i=0;str[i]!='\0';i++,tamanho_str++){}
    printf("Tamanho: %d\n",tamanho_str);

    aux = tamanho_str;

    tamanho_str=tamanho_str-1;
    printf("Tamanho: %d\n",tamanho_str);

    for(int j=0;j<aux;j++,tamanho_str--)
    {
        strinvertida[j] = str[tamanho_str];
    }
    strinvertida[aux]='\0';
    printf("Str invertida: %s\n",strinvertida);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==strinvertida[i])
        {
            comparativo++;
        }
    }
    printf("Comparativo: %d\n\n",comparativo);
    if(aux==comparativo)
    {
        printf("\tA palavra é um palíndromo\n");
    }
    else
    {
        printf("\tA palavra não é um palíndromo\n");
    }
return 0;
}
