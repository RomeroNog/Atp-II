#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char str[6];
    int k=1,tamanho=0;

    for(int i=0;i<5;i++,k++,tamanho++)
    {
        printf("Número %d: ",k);
        scanf("%d",&str[i]);
    }
    str[5] ='\0';
    for(int j=0;str[j]!='\0';j++)
    {
        printf("Numeros: %d\n",str[j]);
    }
    printf("TAm: %d\n",tamanho);
    tamanho --;
    for(int l=0;tamanho>-1;tamanho--)
    {
        printf("Invertidos: %d\n",str[tamanho]);
    }
return 0;
}
